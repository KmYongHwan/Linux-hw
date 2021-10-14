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
	{ 0x250c1a52, "device_for_each_child" },
	{ 0xb4ec4b77, "i2c_adapter_type" },
	{ 0x77cbe3de, "gpiod_to_chip" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x5aeff885, "i2c_smbus_write_i2c_block_data" },
	{ 0x12a38747, "usleep_range" },
	{ 0xf858aaf8, "gpiod_set_value_cansleep" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:usb2512b");
MODULE_ALIAS("i2c:usb2512bi");
MODULE_ALIAS("i2c:usb2513b");
MODULE_ALIAS("i2c:usb2513bi");
MODULE_ALIAS("i2c:usb2514b");
MODULE_ALIAS("i2c:usb2514bi");
MODULE_ALIAS("i2c:usb2517");
MODULE_ALIAS("i2c:usb2517i");

MODULE_INFO(srcversion, "A7C1C6D0BB70BCA05F6B727");
