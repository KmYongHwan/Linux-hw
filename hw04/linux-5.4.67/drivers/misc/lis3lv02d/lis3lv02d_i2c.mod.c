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
	{ 0xc5850110, "printk" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8cf22ace, "regulator_bulk_disable" },
	{ 0xc3faca9e, "lis3lv02d_init_device" },
	{ 0x12a38747, "usleep_range" },
	{ 0x59f91a4d, "regulator_bulk_enable" },
	{ 0x521d5d13, "regulator_bulk_get" },
	{ 0xf6ae4a4, "i2c_smbus_read_i2c_block_data" },
	{ 0xc6810ec2, "i2c_smbus_read_byte_data" },
	{ 0x918fd6c, "i2c_smbus_write_byte_data" },
	{ 0xff426c78, "regulator_bulk_free" },
	{ 0x346594f3, "lis3lv02d_remove_fs" },
	{ 0xb69612ec, "lis3_dev" },
	{ 0xf1997630, "lis3lv02d_joystick_disable" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xf5d16be7, "lis3lv02d_poweroff" },
	{ 0xc7bd69bf, "lis3lv02d_poweron" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "lis3lv02d");

MODULE_ALIAS("i2c:lis3lv02d");
MODULE_ALIAS("i2c:lis331dlh");

MODULE_INFO(srcversion, "17622676139ADA78D5A062E");
