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
	{ 0xd36f7c4f, "ufshcd_runtime_suspend" },
	{ 0x18444fb4, "ufshcd_alloc_host" },
	{ 0xdf9183f8, "ufshcd_system_suspend" },
	{ 0x67ad3cc8, "ufshcd_init" },
	{ 0x6a499ac2, "ufshcd_system_resume" },
	{ 0xbc11c817, "ufshcd_shutdown" },
	{ 0xc5850110, "printk" },
	{ 0xfb533ff3, "ufshcd_runtime_idle" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x22ad1509, "ufshcd_runtime_resume" },
	{ 0x6389d8f4, "pm_runtime_enable" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x64a03d24, "__pm_runtime_set_status" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0xfbd91ef6, "ufshcd_dealloc_host" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xfd6e5b19, "platform_get_irq" },
	{ 0xd1b279c, "devm_platform_ioremap_resource" },
};

MODULE_INFO(depends, "ufshcd-core");


MODULE_INFO(srcversion, "6D2D029E92D7E364FAE2785");
