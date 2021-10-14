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
	{ 0xfcec0987, "enable_irq" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0xc6810ec2, "i2c_smbus_read_byte_data" },
	{ 0x5ada0011, "input_event" },
	{ 0xa1799421, "i2c_smbus_read_byte" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xe67878c0, "devm_led_classdev_register_ext" },
	{ 0xbca28682, "devm_request_threaded_irq" },
	{ 0xff76d558, "input_register_device" },
	{ 0xa89177c8, "input_set_capability" },
	{ 0x71af84e7, "devm_input_allocate_device" },
	{ 0x3abeb957, "devm_add_action" },
	{ 0xf9a482f9, "msleep" },
	{ 0x59f91a4d, "regulator_bulk_enable" },
	{ 0xf45bf890, "devm_regulator_bulk_get" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x8b6e69a6, "regulator_set_voltage" },
	{ 0x918fd6c, "i2c_smbus_write_byte_data" },
	{ 0x35c871dd, "i2c_smbus_write_byte" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x8cf22ace, "regulator_bulk_disable" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Ccypress,tm2-touchkey");
MODULE_ALIAS("of:N*T*Ccypress,tm2-touchkeyC*");
MODULE_ALIAS("of:N*T*Ccypress,midas-touchkey");
MODULE_ALIAS("of:N*T*Ccypress,midas-touchkeyC*");
MODULE_ALIAS("of:N*T*Ccypress,aries-touchkey");
MODULE_ALIAS("of:N*T*Ccypress,aries-touchkeyC*");
MODULE_ALIAS("of:N*T*Ccoreriver,tc360-touchkey");
MODULE_ALIAS("of:N*T*Ccoreriver,tc360-touchkeyC*");
MODULE_ALIAS("i2c:tm2-touchkey");

MODULE_INFO(srcversion, "9B15999D6DB51D634FA0026");
