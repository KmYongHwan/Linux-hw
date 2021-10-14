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
	{ 0x82c0ced2, "stmmac_resume" },
	{ 0x553e7cde, "devm_ioremap_resource" },
	{ 0xa943b224, "platform_get_resource" },
	{ 0xdd3494af, "stmmac_dvr_remove" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x4a4cba33, "platform_get_irq_byname_optional" },
	{ 0x9ec43e96, "platform_get_irq_byname" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa7ecca72, "stmmac_suspend" },
};

MODULE_INFO(depends, "stmmac");


MODULE_INFO(srcversion, "0DD966D30DD7D2CF19089DD");
