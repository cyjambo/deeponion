//
// Created by arcas on 4/30/2018.
//

#include "darktheme.h"
#include "lighttheme.h"
#include "themeadapter.h"
#include <iostream>

#include <QSettings>


static QString currentTheme;
static bool currentThemeInitiated = false;

static void ThemeAdapter::changeTheme(QString newTheme) {
    currentTheme = newTheme;
}

static QString ThemeAdapter::getStyleSheet() {
    QSettings settings;
    if (!currentThemeInitiated) {
        currentTheme = settings.value("theme", "dark").toString();
        currentThemeInitiated = true;
    }

    if (currentTheme.compare("light", Qt::CaseSensitive) == 0) {
        return LIGHT_THEME_STYLESHEET;
    } else {
        return DARK_THEME_STYLESHEET;
    }
}

QString ThemeAdapter::getMainMenuNormalButtonStyle() {
    if (currentTheme.compare("light", Qt::CaseSensitive) == 0) {
        return LT_MAIN_MENU_NORMAL_BUTTON_STYLE;
    } else {
        return DT_MAIN_MENU_NORMAL_BUTTON_STYLE;
    }
}
static QString ThemeAdapter::getMainMenuSelectedButtonStyle(){
    if (currentTheme.compare("light", Qt::CaseSensitive) == 0) {
        return LT_MAIN_MENU_SELECTED_BUTTON_STYLE;
    } else {
        return DT_MAIN_MENU_SELECTED_BUTTON_STYLE;
    }
}
static QString ThemeAdapter::getMainMenuDeactivatedButtonStyle() {
    if (currentTheme.compare("light", Qt::CaseSensitive) == 0) {
        return LT_MAIN_MENU_DEACTIVATED_BUTTON_STYLE;
    } else {
        return DT_MAIN_MENU_DEACTIVATED_BUTTON_STYLE;
    }
}

static QString ThemeAdapter::getCentralWidgetStyle() {
    if (currentTheme.compare("light", Qt::CaseSensitive) == 0) {
        return LT_CENTRAL_WIDGET_STYLE;
    } else {
        return DT_CENTRAL_WIDGET_STYLE;
    }
}

static QString ThemeAdapter::getDockMainMenuStyle() {
    if (currentTheme.compare("light", Qt::CaseSensitive) == 0) {
        return LT_DOCK_MAIN_MENU_STYLE;
    } else {
        return DT_DOCK_MAIN_MENU_STYLE;
    }
}

static QString ThemeAdapter::getOverviewNormalBtnIcon() {
    if (currentTheme.compare("light", Qt::CaseSensitive) == 0) {
        return LT_MAIN_MENU_OVERVIEW_BTN_ICO;
    } else {
        return DT_MAIN_MENU_OVERVIEW_BTN_ICO;
    }
}

static QString ThemeAdapter::getOverviewSelectedBtnIcon() {
    if (currentTheme.compare("light", Qt::CaseSensitive) == 0) {
        return LT_MAIN_MENU_OVERVIEW_S_BTN_ICO;
    } else {
        return DT_MAIN_MENU_OVERVIEW_BTN_ICO;
    }
}

static QString ThemeAdapter::getSendCoinsNormalBtnIcon() {
    if (currentTheme.compare("light", Qt::CaseSensitive) == 0) {
        return LT_MAIN_MENU_SENDCOINS_BTN_ICO;
    } else {
        return DT_MAIN_MENU_SENDCOINS_BTN_ICO;
    }
}

static QString ThemeAdapter::getSendCoinsSelectedBtnIcon() {
    if (currentTheme.compare("light", Qt::CaseSensitive) == 0) {
        return LT_MAIN_MENU_SENDCOINS_S_BTN_ICO;
    } else {
        return DT_MAIN_MENU_SENDCOINS_BTN_ICO;
    }
}

static QString ThemeAdapter::getReceiveCoinsNormalBtnIcon() {
    if (currentTheme.compare("light", Qt::CaseSensitive) == 0) {
        return LT_MAIN_MENU_RECEIVECOINS_BTN_ICO;
    } else {
        return DT_MAIN_MENU_RECEIVECOINS_BTN_ICO;
    }
}

static QString ThemeAdapter::getReceiveCoinsSelectedBtnIcon() {
    if (currentTheme.compare("light", Qt::CaseSensitive) == 0) {
        return LT_MAIN_MENU_RECEIVECOINS_S_BTN_ICO;
    } else {
        return DT_MAIN_MENU_RECEIVECOINS_BTN_ICO;
    }
}

static QString ThemeAdapter::getTransactionsNormalBtnIcon() {
    if (currentTheme.compare("light", Qt::CaseSensitive) == 0) {
        return LT_MAIN_MENU_TRANSACTIONS_BTN_ICO;
    } else {
        return DT_MAIN_MENU_TRANSACTIONS_BTN_ICO;
    }
}

static QString ThemeAdapter::getTransactionsSelectedBtnIcon() {
    if (currentTheme.compare("light", Qt::CaseSensitive) == 0) {
        return LT_MAIN_MENU_TRANSACTIONS_S_BTN_ICO;
    } else {
        return DT_MAIN_MENU_TRANSACTIONS_BTN_ICO;
    }
}

static QString ThemeAdapter::getAddressBookNormalBtnIcon() {
    if (currentTheme.compare("light", Qt::CaseSensitive) == 0) {
        return LT_MAIN_MENU_ADDRESSBOOK_BTN_ICO;
    } else {
        return DT_MAIN_MENU_ADDRESSBOOK_BTN_ICO;
    }
}

static QString ThemeAdapter::getAddressBookSelectedBtnIcon() {
    if (currentTheme.compare("light", Qt::CaseSensitive) == 0) {
        return LT_MAIN_MENU_ADDRESSBOOK_S_BTN_ICO;
    } else {
        return DT_MAIN_MENU_ADDRESSBOOK_BTN_ICO;
    }
}

static QString ThemeAdapter::getMessagesNormalBtnIcon() {
    if (currentTheme.compare("light", Qt::CaseSensitive) == 0) {
        return LT_MAIN_MENU_MESSAGES_BTN_ICO;
    } else {
        return DT_MAIN_MENU_MESSAGES_BTN_ICO;
    }
}

static QString ThemeAdapter::getMessagesSelectedBtnIcon() {
    if (currentTheme.compare("light", Qt::CaseSensitive) == 0) {
        return LT_MAIN_MENU_MESSAGES_S_BTN_ICO;
    } else {
        return DT_MAIN_MENU_MESSAGES_BTN_ICO;
    }
}

static QString ThemeAdapter::getExportNormalBtnIcon() {
    if (currentTheme.compare("light", Qt::CaseSensitive) == 0) {
        return LT_MAIN_MENU_EXPORT_BTN_ICO;
    } else {
        return DT_MAIN_MENU_EXPORT_BTN_ICO;
    }
}

static QString ThemeAdapter::getExportSelectedBtnIcon() {
    if (currentTheme.compare("light", Qt::CaseSensitive) == 0) {
        return LT_MAIN_MENU_EXPORT_S_BTN_ICO;
    } else {
        return DT_MAIN_MENU_EXPORT_BTN_ICO;
    }
}

static QString ThemeAdapter::getQFrameGeneralStyle() {
    if (currentTheme.compare("light", Qt::CaseSensitive) == 0) {
        return LT_QFRAME_GENERAL_STYLE;
    } else {
        return DT_QFRAME_GENERAL_STYLE;
    }
}

static QString ThemeAdapter::getQFrameMenuGeneralStyle() {
    if (currentTheme.compare("light", Qt::CaseSensitive) == 0) {
        return LT_QFRAME_MENU_GENERAL_STYLE;
    } else {
        return DT_QFRAME_MENU_GENERAL_STYLE;
    }
}

static QString ThemeAdapter::getQListAlternateRowsGeneralStyle() {
    if (currentTheme.compare("light", Qt::CaseSensitive) == 0) {
        return LT_LIST_ALTERNATE_GENERAL_STYLE;
    } else {
        return DT_LIST_ALTERNATE_GENERAL_STYLE;
    }
}

static QString ThemeAdapter::getQListHeaderGeneralStyle() {
    if (currentTheme.compare("light", Qt::CaseSensitive) == 0) {
        return LT_LIST_HEADER_GENERAL_STYLE;
    } else {
        return DT_LIST_HEADER_GENERAL_STYLE;
    }
}

static QString ThemeAdapter::getQLabelGeneralStyle() {
    if (currentTheme.compare("light", Qt::CaseSensitive) == 0) {
        return LT_QLABEL_GENERAL_STYLE;
    } else {
        return DT_QLABEL_GENERAL_STYLE;
    }
}

static QString ThemeAdapter::getQLineEditGeneralStyle() {
    if (currentTheme.compare("light", Qt::CaseSensitive) == 0) {
        return LT_LINE_EDIT;
    } else {
        return DT_LINE_EDIT;
    }
}

static QString ThemeAdapter::getIconTextButtonStyle() {
    if (currentTheme.compare("light", Qt::CaseSensitive) == 0) {
        return LT_ICON_TEXT_BUTTON_STYLE;
    } else {
        return DT_ICON_TEXT_BUTTON_STYLE;
    }
}
