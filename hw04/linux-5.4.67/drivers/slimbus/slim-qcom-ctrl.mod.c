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
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x815588a6, "clk_enable" },
	{ 0xdce7165b, "__pm_runtime_disable" },
	{ 0xa625ec51, "__pm_runtime_use_autosuspend" },
	{ 0xc76aa310, "__pm_runtime_suspend" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x553e7cde, "devm_ioremap_resource" },
	{ 0xf01b99c5, "slim_device_report_present" },
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0xbf4e3d9, "slim_unregister_controller" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x3801776b, "__ioread32_copy" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x9cf37c44, "__iowrite32_copy" },
	{ 0x3efe9672, "slim_msg_response" },
	{ 0x12a38747, "usleep_range" },
	{ 0x6389d8f4, "pm_runtime_enable" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x64a03d24, "__pm_runtime_set_status" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xb1fa0e0e, "devm_clk_get" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0x24519c40, "platform_get_resource_byname" },
	{ 0xe2603276, "slim_register_controller" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x69acdf38, "memcpy" },
	{ 0x5c415271, "devm_ioremap" },
	{ 0x89c33339, "pm_runtime_set_autosuspend_delay" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0xfd6e5b19, "platform_get_irq" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x5df5490c, "slim_ctrl_clk_pause" },
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xb80d8b24, "slim_do_transfer" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0xbca28682, "devm_request_threaded_irq" },
	{ 0xdf9208c0, "alloc_workqueue" },
};

MODULE_INFO(depends, "slimbus");


MODULE_INFO(srcversion, "0A672E1EE8DBE231CB12303");
