//
//  Generated file. Do not edit.
//

// clang-format off

#include "generated_plugin_registrant.h"

#include <bdk_flutter/bdk_flutter_plugin.h>

void fl_register_plugins(FlPluginRegistry* registry) {
  g_autoptr(FlPluginRegistrar) bdk_flutter_registrar =
      fl_plugin_registry_get_registrar_for_plugin(registry, "BdkFlutterPlugin");
  bdk_flutter_plugin_register_with_registrar(bdk_flutter_registrar);
}
