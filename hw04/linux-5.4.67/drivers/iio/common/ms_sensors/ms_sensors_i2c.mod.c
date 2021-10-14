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
	{ 0xf6ae4a4, "i2c_smbus_read_i2c_block_data" },
	{ 0x918fd6c, "i2c_smbus_write_byte_data" },
	{ 0x9f1e215a, "i2c_transfer" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xdfec67c9, "i2c_smbus_read_word_data" },
	{ 0x6a6e05bf, "kstrtou8" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x35c871dd, "i2c_smbus_write_byte" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x12a38747, "usleep_range" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0xb17ff434, "i2c_transfer_buffer_flags" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "CDC8CC294DAE9ABE54B4EBF");
