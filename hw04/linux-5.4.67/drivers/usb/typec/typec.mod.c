#include <linux/build-salt.h>
#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(.gnu.linkonce.this_module) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0x7459220b, "module_layout" },
	{ 0x4de8d7ee, "class_find_device" },
	{ 0x35db28d0, "bus_register" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x99d4d9c3, "device_connection_find_match" },
	{ 0xf44a972b, "driver_register" },
	{ 0x754d539c, "strlen" },
	{ 0x81188c30, "match_string" },
	{ 0xfe736ff9, "kobject_uevent" },
	{ 0x349cc11, "device_match_name" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x4ece3615, "blocking_notifier_chain_unregister" },
	{ 0x250dc6c8, "fwnode_property_present" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x169938c1, "__sysfs_match_string" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0x785dd9f2, "device_register" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x3963cf1a, "device_find_child" },
	{ 0x548bc933, "class_unregister" },
	{ 0xa58a74ac, "driver_unregister" },
	{ 0xffb7c514, "ida_free" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x79fad236, "fwnode_property_read_u16_array" },
	{ 0xe193ad0d, "sysfs_remove_link" },
	{ 0xb6f7270a, "device_add" },
	{ 0x3cdf68c7, "__class_register" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xdf752ab4, "bus_unregister" },
	{ 0xe01dfded, "sysfs_create_link" },
	{ 0xf720a60b, "module_put" },
	{ 0x7ea19302, "put_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x823eae06, "blocking_notifier_call_chain" },
	{ 0xbcf9229f, "device_match_fwnode" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xfd7ccba2, "sysfs_notify" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x907d14d, "blocking_notifier_chain_register" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x963cf8c8, "get_device" },
	{ 0x37a0cba, "kfree" },
	{ 0x2af970a3, "device_initialize" },
	{ 0x5397f8e8, "dev_fwnode" },
	{ 0x8f1e938c, "class_destroy" },
	{ 0x1aa8d2a8, "device_unregister" },
	{ 0x222e7ce2, "sysfs_streq" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x4e83cd98, "dev_set_name" },
	{ 0x66414bc7, "__class_create" },
	{ 0xa7d5f92e, "ida_destroy" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0x47a8c8a0, "try_module_get" },
	{ 0xe7a02573, "ida_alloc_range" },
	{ 0x719e0e44, "add_uevent_var" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "6B393C5623CA04FB651ED19");
