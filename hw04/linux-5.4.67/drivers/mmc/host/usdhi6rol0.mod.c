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
	{ 0x7021fe18, "dma_direct_unmap_sg" },
	{ 0x3ecb7f7, "dma_direct_map_sg" },
	{ 0xa637b975, "dma_ops" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xc5534d64, "ioread16" },
	{ 0x6a86bc1, "iowrite16" },
	{ 0x12a38747, "usleep_range" },
	{ 0x87b22bbc, "mmc_regulator_set_ocr" },
	{ 0x87b8798d, "sg_next" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x8cdde1de, "pinctrl_select_state" },
	{ 0xe8614fdf, "mmc_regulator_set_vqmmc" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x88b896fa, "mmc_add_host" },
	{ 0x177803b5, "dma_request_slave_channel" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xbca28682, "devm_request_threaded_irq" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0xb1fa0e0e, "devm_clk_get" },
	{ 0x553e7cde, "devm_ioremap_resource" },
	{ 0xa943b224, "platform_get_resource" },
	{ 0x7ce818cb, "pinctrl_lookup_state" },
	{ 0xa0f3721b, "devm_pinctrl_get" },
	{ 0xa329a74, "mmc_of_parse" },
	{ 0xc55d955, "mmc_regulator_get_supply" },
	{ 0x5dfc583d, "mmc_alloc_host" },
	{ 0x9ec43e96, "platform_get_irq_byname" },
	{ 0xc8333695, "mmc_detect_change" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0xc0af0f07, "wake_up_process" },
	{ 0xe484e35f, "ioread32" },
	{ 0x5e7f490d, "mmc_request_done" },
	{ 0x56470118, "__warn_printk" },
	{ 0x69acdf38, "memcpy" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x13799a9f, "mmc_free_host" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xd14fbbf, "mmc_remove_host" },
	{ 0x318de333, "dma_release_channel" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Crenesas,usdhi6rol0");
MODULE_ALIAS("of:N*T*Crenesas,usdhi6rol0C*");

MODULE_INFO(srcversion, "19B1D879B54DDFD29F25F68");
