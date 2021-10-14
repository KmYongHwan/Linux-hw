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
	{ 0x33470ace, "mc13xxx_variant_mc34708" },
	{ 0x61f2b486, "mc13xxx_variant_mc13892" },
	{ 0x2148ffa6, "mc13xxx_variant_mc13783" },
	{ 0xa58a74ac, "driver_unregister" },
	{ 0xe4324b36, "__spi_register_driver" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xf1de7d06, "spi_get_device_id" },
	{ 0xe2cd67f2, "mc13xxx_common_init" },
	{ 0xeb74317, "__devm_regmap_init" },
	{ 0x8392a4c1, "spi_setup" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x85b7373, "spi_sync" },
	{ 0x4888f0b9, "mc13xxx_common_exit" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mc13xxx-core");

MODULE_ALIAS("of:N*T*Cfsl,mc13783");
MODULE_ALIAS("of:N*T*Cfsl,mc13783C*");
MODULE_ALIAS("of:N*T*Cfsl,mc13892");
MODULE_ALIAS("of:N*T*Cfsl,mc13892C*");
MODULE_ALIAS("of:N*T*Cfsl,mc34708");
MODULE_ALIAS("of:N*T*Cfsl,mc34708C*");
MODULE_ALIAS("spi:mc13783");
MODULE_ALIAS("spi:mc13892");
MODULE_ALIAS("spi:mc34708");

MODULE_INFO(srcversion, "9ECF0B518300BFB2FBFF8D1");
