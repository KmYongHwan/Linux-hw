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
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0x2a26e84c, "input_free_device" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xeebd5754, "input_allocate_device" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x37a0cba, "kfree" },
	{ 0x3f69beeb, "input_unregister_device" },
	{ 0xa6c74fc, "am335x_tsc_se_clr" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x15fc91fe, "device_init_wakeup" },
	{ 0xe0b29c1a, "dev_pm_clear_wake_irq" },
	{ 0xf14aa8d2, "am335x_tsc_se_set_cache" },
	{ 0xabe00763, "pm_relax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ti_am335x_tscadc");

MODULE_ALIAS("of:N*T*Cti,am3359-tsc");
MODULE_ALIAS("of:N*T*Cti,am3359-tscC*");

MODULE_INFO(srcversion, "55E1450021DAFF3F77CD3F2");
