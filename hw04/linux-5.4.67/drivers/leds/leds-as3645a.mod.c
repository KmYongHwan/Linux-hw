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
	{ 0xcde7ff37, "i2c_del_driver" },
	{ 0xa32ee0fe, "i2c_register_driver" },
	{ 0x45311ce9, "led_classdev_flash_register_ext" },
	{ 0x2af4b11a, "led_classdev_register_ext" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xb8d89726, "fwnode_property_read_u32_array" },
	{ 0x23831130, "fwnode_handle_get" },
	{ 0x99ed122, "fwnode_get_next_child_node" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x5397f8e8, "dev_fwnode" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb56dbb86, "v4l2_flash_indicator_init" },
	{ 0xe31f4c94, "v4l2_flash_init" },
	{ 0x754d539c, "strlen" },
	{ 0xd53f74e9, "fwnode_handle_put" },
	{ 0xd52dbe7d, "led_classdev_unregister" },
	{ 0x7bfa89ea, "led_classdev_flash_unregister" },
	{ 0xb06d787e, "v4l2_flash_release" },
	{ 0x918fd6c, "i2c_smbus_write_byte_data" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0xc6810ec2, "i2c_smbus_read_byte_data" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "led-class-flash,v4l2-flash-led-class");

MODULE_ALIAS("of:N*T*Cams,as3645a");
MODULE_ALIAS("of:N*T*Cams,as3645aC*");
MODULE_ALIAS("i2c:as3645a");

MODULE_INFO(srcversion, "6DCBFE833EF7B9892D1292C");
