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
	{ 0x2242ddd1, "__devm_create_dev_dax" },
	{ 0x77358855, "iomem_resource" },
	{ 0x11db28fd, "nvdimm_namespace_common_probe" },
	{ 0x2105d91f, "devm_nsio_disable" },
	{ 0x3ce892fa, "alloc_dax_region" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x678eaa2, "devm_nsio_enable" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x15c816d8, "dax_region_put" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xa571ed0e, "nvdimm_setup_pfn" },
	{ 0xfef6ccb5, "__devm_request_region" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x6085a3af, "to_nd_dax" },
	{ 0xa0bd96af, "to_nd_region" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "2B48A802BC85C0EA54B5E69");
