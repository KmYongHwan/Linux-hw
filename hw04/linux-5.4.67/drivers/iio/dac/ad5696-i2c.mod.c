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
	{ 0xb17ff434, "i2c_transfer_buffer_flags" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9f1e215a, "i2c_transfer" },
	{ 0x40d41069, "ad5686_probe" },
	{ 0xe86eb0fc, "ad5686_remove" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ad5686");

MODULE_ALIAS("i2c:ad5311r");
MODULE_ALIAS("i2c:ad5671r");
MODULE_ALIAS("i2c:ad5675r");
MODULE_ALIAS("i2c:ad5691r");
MODULE_ALIAS("i2c:ad5692r");
MODULE_ALIAS("i2c:ad5693");
MODULE_ALIAS("i2c:ad5693r");
MODULE_ALIAS("i2c:ad5694");
MODULE_ALIAS("i2c:ad5694r");
MODULE_ALIAS("i2c:ad5695r");
MODULE_ALIAS("i2c:ad5696");
MODULE_ALIAS("i2c:ad5696r");

MODULE_INFO(srcversion, "9E57621DE1D5256378CC33C");
