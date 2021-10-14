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
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0xe44371c8, "cw1200_irq_handler" },
	{ 0xc8bcbbf3, "sdio_enable_func" },
	{ 0x47229b5c, "gpio_request" },
	{ 0x1535a4f3, "sdio_claim_irq" },
	{ 0x91226d06, "gpio_to_desc" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x640a9a12, "cw1200_core_release" },
	{ 0xc86edb79, "cw1200_can_suspend" },
	{ 0xc5850110, "printk" },
	{ 0xc1f391ba, "gpiod_direction_output_raw" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xec6dbfd3, "sdio_unregister_driver" },
	{ 0x892d752a, "sdio_f0_writeb" },
	{ 0x3ca22690, "sdio_set_host_pm_flags" },
	{ 0x7c3c7d83, "sdio_release_irq" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc06825ae, "sdio_align_size" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xf2869358, "sdio_f0_readb" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xa8f6bf5c, "sdio_memcpy_toio" },
	{ 0xfe990052, "gpio_free" },
	{ 0x37a0cba, "kfree" },
	{ 0x7d8c5e78, "gpiod_set_raw_value" },
	{ 0xfe8830e8, "sdio_register_driver" },
	{ 0xd79398b2, "sdio_memcpy_fromio" },
	{ 0x75faced3, "sdio_claim_host" },
	{ 0xd3640b81, "cw1200_core_probe" },
	{ 0x474623ba, "sdio_disable_func" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xb3dcfb60, "sdio_release_host" },
};

MODULE_INFO(depends, "cw1200_core");


MODULE_INFO(srcversion, "6CF9CC03C2CF1FE7BA3797E");
