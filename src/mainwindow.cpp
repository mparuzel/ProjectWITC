/*
 * Author: Mark Paruzel <mark@markparuzel.com>
 * Date:  2017-07-17
 *
 * This file is free software; you can redistribute it and/or modify it under
 * the terms of the GNU Lesser General Public License as published by the Free
 * Software Foundation; either version 2.1 of the License, or (at your option)
 * any later version.
 *
 * This file is distributed in the hope that it will be useful, but WITHOUT ANY
 * WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR
 * A PARTICULAR PURPOSE. See the GNU Lesser General Public License for more
 * details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this file; if not, see: <http://www.gnu.org/licenses/>.
 */

#include "mainwindow.h"
#include "ui_form.h"

TMainWidget::TMainWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Form)
{
        ui->setupUi(this);
}

TMainWidget::~TMainWidget()
{
        delete ui;
}
