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
	{ 0x890b3d61, "_dev_err" },
	{ 0xb17ff434, "i2c_transfer_buffer_flags" },
	{ 0x54c9409, "ad714x_probe" },
	{ 0x3368fb43, "ad714x_disable" },
	{ 0x1bae5c14, "ad714x_enable" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ad714x");

MODULE_ALIAS("i2c:ad7142_captouch");
MODULE_ALIAS("i2c:ad7143_captouch");
MODULE_ALIAS("i2c:ad7147_captouch");
MODULE_ALIAS("i2c:ad7147a_captouch");
MODULE_ALIAS("i2c:ad7148_captouch");

MODULE_INFO(srcversion, "172E4235AB35E872182E811");
