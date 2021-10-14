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
	{ 0xec6dbfd3, "sdio_unregister_driver" },
	{ 0xfe8830e8, "sdio_register_driver" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xfbd10329, "hci_recv_frame" },
	{ 0x9c160d9e, "skb_put" },
	{ 0xfc2d702f, "__alloc_skb" },
	{ 0x2d1ff8e1, "sdio_readsb" },
	{ 0xb2dcc92a, "sdio_readb" },
	{ 0x7c4509ba, "skb_queue_head" },
	{ 0xb18156be, "skb_pull" },
	{ 0x90f771ce, "sdio_writesb" },
	{ 0x4d1a1157, "skb_push" },
	{ 0xf4733f31, "skb_dequeue" },
	{ 0x11aa2f15, "kfree_skb" },
	{ 0xade4637f, "hci_register_dev" },
	{ 0xd0f037bf, "hci_alloc_dev" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x1535a4f3, "sdio_claim_irq" },
	{ 0xc8bcbbf3, "sdio_enable_func" },
	{ 0xb3dcfb60, "sdio_release_host" },
	{ 0x474623ba, "sdio_disable_func" },
	{ 0x7c3c7d83, "sdio_release_irq" },
	{ 0x3528921c, "sdio_writeb" },
	{ 0x75faced3, "sdio_claim_host" },
	{ 0xe76ae805, "skb_queue_purge" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x9ab0ed7c, "skb_queue_tail" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x1b4777, "hci_free_dev" },
	{ 0xfaf08463, "hci_unregister_dev" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "bluetooth");

MODULE_ALIAS("sdio:c02v*d*");
MODULE_ALIAS("sdio:c03v*d*");
MODULE_ALIAS("sdio:c09v*d*");

MODULE_INFO(srcversion, "58398886812F0B4CE9E4672");
