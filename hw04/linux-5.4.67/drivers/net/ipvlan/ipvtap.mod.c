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
	{ 0x85bf07d3, "net_ns_type_operations" },
	{ 0x92e3370c, "rtnl_link_unregister" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x2580064e, "ipvlan_link_register" },
	{ 0x3b141d03, "tap_destroy_cdev" },
	{ 0x548bc933, "class_unregister" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x3cdf68c7, "__class_register" },
	{ 0x56f4fc1f, "tap_create_cdev" },
	{ 0xa3696656, "ipvlan_link_new" },
	{ 0xe0ca8433, "netdev_rx_handler_register" },
	{ 0x345a9c, "tap_handle_frame" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xe01dfded, "sysfs_create_link" },
	{ 0x88e96942, "device_create" },
	{ 0xde5b8578, "tap_free_minor" },
	{ 0x8aeb7a6b, "device_destroy" },
	{ 0xe193ad0d, "sysfs_remove_link" },
	{ 0x6bf39de5, "tap_queue_resize" },
	{ 0x4465f66, "tap_get_minor" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xae3a38c, "ipvlan_link_setup" },
	{ 0xea08bafa, "netdev_update_features" },
	{ 0xe8b990a9, "ipvlan_count_rx" },
	{ 0x28fc910c, "ipvlan_link_delete" },
	{ 0xbf5d2ed7, "tap_del_queues" },
	{ 0xdc81e95a, "netdev_rx_handler_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ipvlan,tap");


MODULE_INFO(srcversion, "AC1644142B3B562D356A147");
