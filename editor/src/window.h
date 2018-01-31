/* -*- Mode: C++; indent-tabs-mode: nil; tab-width: 4 -*-
 * -*- coding: utf-8 -*-
 *
 * Copyright (C) 2011 ~ 2018 Deepin, Inc.
 *               2011 ~ 2018 Wang Yong
 *
 * Author:     Wang Yong <wangyong@deepin.com>
 * Maintainer: Wang Yong <wangyong@deepin.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */ 

#ifndef WINDOW_H
#define WINDOW_H

#include "dmainwindow.h"
#include "findbar.h"
#include "settings.h"
#include "jumplinebar.h"
#include <dimagebutton.h>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QResizeEvent>
#include <QWidget>
#include "editor.h"
#include "tabbar.h"
#include <QStackedLayout>

DWIDGET_USE_NAMESPACE

class Window : public DMainWindow
{
    Q_OBJECT
    
public:
    Window(DMainWindow *parent = 0);
    ~Window();
    
    void keyPressEvent(QKeyEvent *keyEvent);
    
    void addTab(QString file);
    int isFileInTabs(QString file);
    void activeTab(int index);
    void openFile();
    void saveFile();
    void saveAsFile();
                      
    void toggleFullscreen();
                           
    Editor* getActiveEditor();
    Editor* createEditor();
                             
    void saveFileAsAnotherPath(QString fromPath, QString toPath);
    
    void addTabWithContent(QString tabName, QString filepath, QString content);
    
    TextEditor* getTextEditor(QString filepath);
    
    void incrementFontSize();
    void decrementFontSize();
    void resetFontSize();
    void setFontSizeWithConfig(Editor *editor);
    void saveFontSize(int size);
    
    void addBottomWidget(QWidget *widget);
    
    void popupFindBar();
    
signals:
    void popTab(QString tabName, QString filepath, QString content);
    
public slots:
    void handleSwitchToFile(QString filepath);
    void handleCloseFile(QString filepath);
    void handleTabReleaseRequested(QString tabName, QString filepath, int index);
    void handleJumpLine(QString filepath, int line, int lineCount, int scrollOffset);
    void handleBackToLine(QString filepath, int line, int scrollOffset);
    void handleJumpToLine(QString filepath, int line);
    void handleTempJumpToLine(QString filepath, int line);
    void handleCancelJump();
    void removeBottomWidget();
    void handleBackToPosition(QString file, int row, int column, int scrollOffset);

    void addBlankTab();
    
private:
    QWidget *layoutWidget;
    QWidget *editorWidget;
    QStackedLayout *editorLayout;
    QVBoxLayout *layout;
    
    Tabbar *tabbar;
    QMap<QString, Editor*> editorMap;
    
    int notifyPadding = 20;
    
    JumpLineBar *jumpLineBar;
    
    int fontSize;
    
    Settings *settings;
    
    FindBar *findBar;
};

#endif
