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
	{ 0xe48cff03, "kxsd9_dev_pm_ops" },
	{ 0xa58a74ac, "driver_unregister" },
	{ 0xe4324b36, "__spi_register_driver" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x7a046ee0, "kxsd9_common_probe" },
	{ 0xf1de7d06, "spi_get_device_id" },
	{ 0x42d6f363, "__devm_regmap_init_spi" },
	{ 0x4afdba2a, "kxsd9_common_remove" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "kxsd9");

MODULE_ALIAS("of:N*T*Ckionix,kxsd9");
MODULE_ALIAS("of:N*T*Ckionix,kxsd9C*");
MODULE_ALIAS("spi:kxsd9");

MODULE_INFO(srcversion, "692FE5F8CC94E74C00AFC7C");
