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
	{ 0x73383a98, "mmc_gpio_get_ro" },
	{ 0xa16a4ff1, "pm_runtime_force_resume" },
	{ 0x7c86d216, "pm_runtime_force_suspend" },
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x539533d8, "mmc_send_tuning" },
	{ 0x63150e06, "clk_get_parent" },
	{ 0x1fa8ea04, "regulator_enable" },
	{ 0xaab7fcf, "regulator_disable" },
	{ 0x87b22bbc, "mmc_regulator_set_ocr" },
	{ 0x5efe121, "mmc_can_gpio_cd" },
	{ 0x88b896fa, "mmc_add_host" },
	{ 0x6389d8f4, "pm_runtime_enable" },
	{ 0xa625ec51, "__pm_runtime_use_autosuspend" },
	{ 0x89c33339, "pm_runtime_set_autosuspend_delay" },
	{ 0x64a03d24, "__pm_runtime_set_status" },
	{ 0xbca28682, "devm_request_threaded_irq" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xfb578fc5, "memset" },
	{ 0x3ef84baf, "dma_alloc_attrs" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x7ce818cb, "pinctrl_lookup_state" },
	{ 0xa0f3721b, "devm_pinctrl_get" },
	{ 0xfd6e5b19, "platform_get_irq" },
	{ 0x2652c06a, "__devm_reset_control_get" },
	{ 0xb1fa0e0e, "devm_clk_get" },
	{ 0xc55d955, "mmc_regulator_get_supply" },
	{ 0x553e7cde, "devm_ioremap_resource" },
	{ 0xa943b224, "platform_get_resource" },
	{ 0xa329a74, "mmc_of_parse" },
	{ 0x5dfc583d, "mmc_alloc_host" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x13799a9f, "mmc_free_host" },
	{ 0x445ce05b, "dma_free_attrs" },
	{ 0xdce7165b, "__pm_runtime_disable" },
	{ 0xd14fbbf, "mmc_remove_host" },
	{ 0x330e7414, "__pm_runtime_resume" },
	{ 0x3ecb7f7, "dma_direct_map_sg" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xc8333695, "mmc_detect_change" },
	{ 0xd726a492, "sdio_signal_irq" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x87b8798d, "sg_next" },
	{ 0xf74bb274, "mod_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x5e7f490d, "mmc_request_done" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0x7021fe18, "dma_direct_unmap_sg" },
	{ 0xa637b975, "dma_ops" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x43551e0, "mmc_gpio_get_cd" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xb2210d64, "reset_control_deassert" },
	{ 0x12a38747, "usleep_range" },
	{ 0x6c4b6684, "reset_control_assert" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x8cdde1de, "pinctrl_select_state" },
	{ 0xe8614fdf, "mmc_regulator_set_vqmmc" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cmediatek,mt8135-mmc");
MODULE_ALIAS("of:N*T*Cmediatek,mt8135-mmcC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt8173-mmc");
MODULE_ALIAS("of:N*T*Cmediatek,mt8173-mmcC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt8183-mmc");
MODULE_ALIAS("of:N*T*Cmediatek,mt8183-mmcC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt2701-mmc");
MODULE_ALIAS("of:N*T*Cmediatek,mt2701-mmcC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt2712-mmc");
MODULE_ALIAS("of:N*T*Cmediatek,mt2712-mmcC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt7622-mmc");
MODULE_ALIAS("of:N*T*Cmediatek,mt7622-mmcC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt8516-mmc");
MODULE_ALIAS("of:N*T*Cmediatek,mt8516-mmcC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt7620-mmc");
MODULE_ALIAS("of:N*T*Cmediatek,mt7620-mmcC*");

MODULE_INFO(srcversion, "8B6D748A9C8F2E9258BB516");
