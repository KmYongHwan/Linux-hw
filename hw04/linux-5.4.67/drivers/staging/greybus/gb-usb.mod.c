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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0x7459220b, "module_layout" },
	{ 0xef697afc, "gb_gbphy_register_driver" },
	{ 0xc2a01d7e, "usb_remove_hcd" },
	{ 0xa3e81544, "usb_create_hcd" },
	{ 0x92418c3f, "usb_put_hcd" },
	{ 0x7de887e5, "gb_gbphy_deregister_driver" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x5dc4578a, "gb_operation_sync_timeout" },
	{ 0x5c03fd94, "gb_connection_destroy" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x9ce24b36, "gb_operation_request_send_sync_timeout" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x2345868f, "gb_connection_enable" },
	{ 0x563a20e5, "gb_connection_create" },
	{ 0x69acdf38, "memcpy" },
	{ 0x61ea921a, "gb_connection_disable" },
	{ 0x996c2d4c, "usb_hcd_resume_root_hub" },
	{ 0x3b6475ec, "gb_operation_put" },
	{ 0x872495cf, "gb_operation_create_flags" },
};

MODULE_INFO(depends, "gb-gbphy,greybus");


MODULE_INFO(srcversion, "D05FAA9A391F5997406B22E");
