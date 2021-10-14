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
	{ 0x3054dfcf, "param_ops_bool" },
	{ 0xec6dbfd3, "sdio_unregister_driver" },
	{ 0xfe8830e8, "sdio_register_driver" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xdce7165b, "__pm_runtime_disable" },
	{ 0xade4637f, "hci_register_dev" },
	{ 0xd0f037bf, "hci_alloc_dev" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xaa768b46, "pm_runtime_allow" },
	{ 0x6389d8f4, "pm_runtime_enable" },
	{ 0x8e12dcca, "pm_runtime_forbid" },
	{ 0x64a03d24, "__pm_runtime_set_status" },
	{ 0xa625ec51, "__pm_runtime_use_autosuspend" },
	{ 0x89c33339, "pm_runtime_set_autosuspend_delay" },
	{ 0xf7e2d4ee, "__hci_cmd_sync" },
	{ 0xede283d, "release_firmware" },
	{ 0x71deb539, "request_firmware" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x4071b517, "out_of_line_wait_on_bit_timeout" },
	{ 0x44bae227, "bit_wait_timeout" },
	{ 0x3751a1b8, "__hci_cmd_send" },
	{ 0x69acdf38, "memcpy" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x25b3797e, "skb_trim" },
	{ 0x214e4265, "bt_warn" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x2d1ff8e1, "sdio_readsb" },
	{ 0x9c160d9e, "skb_put" },
	{ 0xfc2d702f, "__alloc_skb" },
	{ 0x32558580, "pskb_expand_head" },
	{ 0xc76aa310, "__pm_runtime_suspend" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x7c4509ba, "skb_queue_head" },
	{ 0xb18156be, "skb_pull" },
	{ 0x90f771ce, "sdio_writesb" },
	{ 0x4d1a1157, "skb_push" },
	{ 0xf4733f31, "skb_dequeue" },
	{ 0x330e7414, "__pm_runtime_resume" },
	{ 0x11aa2f15, "kfree_skb" },
	{ 0xa0fbac79, "wake_up_bit" },
	{ 0xfbd10329, "hci_recv_frame" },
	{ 0x17fc86f3, "skb_clone" },
	{ 0x7d477f96, "sdio_set_block_size" },
	{ 0x1535a4f3, "sdio_claim_irq" },
	{ 0xc8bcbbf3, "sdio_enable_func" },
	{ 0x474623ba, "sdio_disable_func" },
	{ 0x7b8c32f1, "bt_err" },
	{ 0x7c3c7d83, "sdio_release_irq" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xe76ae805, "skb_queue_purge" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x9ab0ed7c, "skb_queue_tail" },
	{ 0x1b4777, "hci_free_dev" },
	{ 0xfaf08463, "hci_unregister_dev" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb3dcfb60, "sdio_release_host" },
	{ 0x718b8b7, "bt_info" },
	{ 0x12a38747, "usleep_range" },
	{ 0x367b747d, "sdio_readl" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x762c19a9, "sdio_writel" },
	{ 0x75faced3, "sdio_claim_host" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "bluetooth");


MODULE_INFO(srcversion, "64E197CE9656947269A0326");
