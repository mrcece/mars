// Tencent is pleased to support the open source community by making Mars available.
// Copyright (C) 2016 THL A29 Limited, a Tencent company. All rights reserved.

// Licensed under the MIT License (the "License"); you may not use this file except in
// compliance with the License. You may obtain a copy of the License at
// http://opensource.org/licenses/MIT

// Unless required by applicable law or agreed to in writing, software distributed under the License is
// distributed on an "AS IS" basis, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
// either express or implied. See the License for the specific language governing permissions and
// limitations under the License.

/*
 * netinfo_util.h
 *
 *  Created on: Dec 19, 2016
 *      Author: wutianqiang
 */

#ifndef SRC_NETINFO_UTIL_H_
#define SRC_NETINFO_UTIL_H_

#include <string>
#include <vector>

typedef enum {
    kNetworkTypeUnknown,
    kNetworkTypeNoNet,
    kNetworkTypeWiFi,
    kNetworkType2G,
    kNetworkType3G,
    kNetworkType4G,
} NetworkType;

NetworkType GetNetworkType();
std::string GetDetailNetInfo(bool _need_wifi_ssid = true);
int get_local_ip(std::vector<std::string>& ips);
#endif /* SRC_NETINFO_UTIL_H_ */
