/***************************************************************************
 *   Copyright (C) 2009 by Dominik Kapusta       <d@ayoy.net>              *
 *                                                                         *
 *   This library is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU Lesser General Public License as        *
 *   published by the Free Software Foundation; either version 2.1 of      *
 *   the License, or (at your option) any later version.                   *
 *                                                                         *
 *   This library is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU     *
 *   Lesser General Public License for more details.                       *
 *                                                                         *
 *   You should have received a copy of the GNU Lesser General Public      *
 *   License along with this library; if not, write to                     *
 *   the Free Software Foundation, Inc.,                                   *
 *   51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA          *
 ***************************************************************************/


#ifndef UT_QOAUTH_H
#define UT_QOAUTH_H

#include <QObject>

class QOAuth;

class Ut_QOAuth : public QObject
{
  Q_OBJECT

private slots:
  void init();
  void cleanup();
  void constructor();

  void consumerKey();
  void setConsumerKey();

  void consumerSecret();
  void setConsumerSecret();

  void requestTimeout();
  void setRequestTimeout();

  void error();

  void requestToken_data();
  void requestToken();

  void accessToken_data();
  void accessToken();

  void createParametersString_data();
  void createParametersString();

private:
  QOAuth *m;
};

#endif // UT_QOAUTH_H
