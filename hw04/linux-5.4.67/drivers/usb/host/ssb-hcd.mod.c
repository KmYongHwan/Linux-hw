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
	{ 0x7709baa0, "ssb_driver_unregister" },
	{ 0x65ae47d0, "__ssb_driver_register" },
	{ 0xdfc7c6ef, "ssb_admatch_size" },
	{ 0xcb17f1cb, "ssb_admatch_base" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x9078fc, "dma_set_coherent_mask" },
	{ 0xf189e453, "dma_set_mask" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf5ee1308, "platform_device_put" },
	{ 0xf39aaf26, "platform_device_add" },
	{ 0x6cbe5161, "platform_device_add_data" },
	{ 0x40b69005, "platform_device_add_resources" },
	{ 0x4530cfec, "platform_device_alloc" },
	{ 0x1f589e38, "platform_device_unregister" },
	{ 0x1276b7e0, "ssb_device_enable" },
	{ 0xc62df2f3, "ssb_device_disable" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ssb");

MODULE_ALIAS("ssb:v4243id0808rev*");
MODULE_ALIAS("ssb:v4243id0817rev*");
MODULE_ALIAS("ssb:v4243id0819rev*");

MODULE_INFO(srcversion, "D1CBD34E5A02BE2CD8EFC4E");
