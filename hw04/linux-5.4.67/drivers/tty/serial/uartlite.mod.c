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
	{ 0xe00365c5, "uart_unregister_driver" },
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0x7491954, "__tty_insert_flip_char" },
	{ 0x39b82a06, "tty_flip_buffer_push" },
	{ 0x330e7414, "__pm_runtime_resume" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x9f6dd27d, "uart_register_driver" },
	{ 0xc76aa310, "__pm_runtime_suspend" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x238695d4, "uart_add_one_port" },
	{ 0x6389d8f4, "pm_runtime_enable" },
	{ 0x89c33339, "pm_runtime_set_autosuspend_delay" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xb1fa0e0e, "devm_clk_get" },
	{ 0xfd6e5b19, "platform_get_irq" },
	{ 0xa943b224, "platform_get_resource" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xd9778c14, "uart_write_wakeup" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xc222c8b, "uart_update_timeout" },
	{ 0x3c2271c8, "uart_get_baud_rate" },
	{ 0xedc03953, "iounmap" },
	{ 0x1035c7c2, "__release_region" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x85bd1608, "__request_region" },
	{ 0x77358855, "iomem_resource" },
	{ 0xfdb9b629, "ioread32be" },
	{ 0xe419bc99, "iowrite32be" },
	{ 0xe484e35f, "ioread32" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xa625ec51, "__pm_runtime_use_autosuspend" },
	{ 0x64a03d24, "__pm_runtime_set_status" },
	{ 0xdce7165b, "__pm_runtime_disable" },
	{ 0xb90692f4, "uart_remove_one_port" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x817c6e33, "uart_suspend_port" },
	{ 0xf84fbc19, "uart_resume_port" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x815588a6, "clk_enable" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "E9F5E597679FA4DDDA9DC56");
