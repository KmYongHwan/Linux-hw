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
	{ 0xa40c0219, "hmc5843_common_resume" },
	{ 0xeaa8e156, "hmc5843_common_suspend" },
	{ 0xcde7ff37, "i2c_del_driver" },
	{ 0xa32ee0fe, "i2c_register_driver" },
	{ 0x26eb88ad, "hmc5843_common_probe" },
	{ 0x9504f9c1, "__devm_regmap_init_i2c" },
	{ 0x3bd4650f, "hmc5843_common_remove" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "hmc5843_core");

MODULE_ALIAS("of:N*T*Choneywell,hmc5843");
MODULE_ALIAS("of:N*T*Choneywell,hmc5843C*");
MODULE_ALIAS("of:N*T*Choneywell,hmc5883");
MODULE_ALIAS("of:N*T*Choneywell,hmc5883C*");
MODULE_ALIAS("of:N*T*Choneywell,hmc5883l");
MODULE_ALIAS("of:N*T*Choneywell,hmc5883lC*");
MODULE_ALIAS("of:N*T*Choneywell,hmc5983");
MODULE_ALIAS("of:N*T*Choneywell,hmc5983C*");
MODULE_ALIAS("i2c:hmc5843");
MODULE_ALIAS("i2c:hmc5883");
MODULE_ALIAS("i2c:hmc5883l");
MODULE_ALIAS("i2c:hmc5983");

MODULE_INFO(srcversion, "8B0142E5F7B7C3211EEF081");
