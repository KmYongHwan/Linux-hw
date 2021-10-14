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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0x7459220b, "module_layout" },
	{ 0xa24f23d8, "__request_module" },
	{ 0xf9a482f9, "msleep" },
	{ 0xed022515, "dibusb_read_eeprom_byte" },
	{ 0x1eeccb79, "dib3000mc_pid_parse" },
	{ 0x26adbf5b, "dib3000mc_pid_control" },
	{ 0xc1937d90, "dib3000mc_get_tuner_i2c_master" },
	{ 0xc5850110, "printk" },
	{ 0xd4530502, "dib3000mc_set_config" },
	{ 0x868784cb, "__symbol_get" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x6e9dd606, "__symbol_put" },
};

MODULE_INFO(depends, "dvb-usb-dibusb-common,dib3000mc");


MODULE_INFO(srcversion, "A0688FD46F2736D07A46D76");
