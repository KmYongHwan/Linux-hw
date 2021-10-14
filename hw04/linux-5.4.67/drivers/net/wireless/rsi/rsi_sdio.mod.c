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
	{ 0x3528921c, "sdio_writeb" },
	{ 0xa0e09e4a, "rsi_91x_init" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x8133c67d, "complete_and_exit" },
	{ 0x90f771ce, "sdio_writesb" },
	{ 0xc8bcbbf3, "sdio_enable_func" },
	{ 0xb2fdaf0e, "rsi_config_wowlan" },
	{ 0x1535a4f3, "sdio_claim_irq" },
	{ 0xb477543, "mmc_wait_for_cmd" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x8db07afd, "kthread_create_on_node" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xcd173710, "rsi_dbg" },
	{ 0xd5209ccf, "__netdev_alloc_skb" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xe76ae805, "skb_queue_purge" },
	{ 0xfb578fc5, "memset" },
	{ 0xba312d7b, "current_task" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x1f1fe509, "kthread_stop" },
	{ 0xab4cc403, "rsi_mac80211_detach" },
	{ 0x7a6fe85c, "rsi_read_pkt" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x2d1ff8e1, "sdio_readsb" },
	{ 0xec6dbfd3, "sdio_unregister_driver" },
	{ 0x892d752a, "sdio_f0_writeb" },
	{ 0x3ca22690, "sdio_set_host_pm_flags" },
	{ 0x9ab0ed7c, "skb_queue_tail" },
	{ 0x7c3c7d83, "sdio_release_irq" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xf2869358, "sdio_f0_readb" },
	{ 0xc0af0f07, "wake_up_process" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xf4733f31, "skb_dequeue" },
	{ 0xaa06691c, "rsi_hal_device_init" },
	{ 0xfe8830e8, "sdio_register_driver" },
	{ 0x15314fce, "consume_skb" },
	{ 0x722a53d5, "param_ops_ushort" },
	{ 0x75faced3, "sdio_claim_host" },
	{ 0x9c160d9e, "skb_put" },
	{ 0x8b4c325b, "rsi_91x_deinit" },
	{ 0x7d477f96, "sdio_set_block_size" },
	{ 0xe00ee1b7, "rsi_bt_ops" },
	{ 0x474623ba, "sdio_disable_func" },
	{ 0xb3dcfb60, "sdio_release_host" },
};

MODULE_INFO(depends, "rsi_91x,btrsi");

MODULE_ALIAS("sdio:c*v041Bd9330*");
MODULE_ALIAS("sdio:c*v041Bd9116*");

MODULE_INFO(srcversion, "B104A76BDAB63CA1CE7FB4F");
