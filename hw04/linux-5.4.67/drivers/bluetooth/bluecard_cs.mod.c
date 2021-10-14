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
	{ 0xdc7e867e, "pcmcia_unregister_driver" },
	{ 0x7da5d7a, "pcmcia_register_driver" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xfbd10329, "hci_recv_frame" },
	{ 0xfc2d702f, "__alloc_skb" },
	{ 0x9c160d9e, "skb_put" },
	{ 0x9ab0ed7c, "skb_queue_tail" },
	{ 0x4d1a1157, "skb_push" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x11aa2f15, "kfree_skb" },
	{ 0x7c4509ba, "skb_queue_head" },
	{ 0xb18156be, "skb_pull" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0xf4733f31, "skb_dequeue" },
	{ 0x7d22237c, "pcmcia_dev_present" },
	{ 0x7b8c32f1, "bt_err" },
	{ 0xade4637f, "hci_register_dev" },
	{ 0xf9a482f9, "msleep" },
	{ 0xd0f037bf, "hci_alloc_dev" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x5e11012c, "pcmcia_enable_device" },
	{ 0xe94d2b89, "pcmcia_request_irq" },
	{ 0xce0f8ba1, "pcmcia_disable_device" },
	{ 0x946cde34, "pcmcia_request_io" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x1b4777, "hci_free_dev" },
	{ 0xfaf08463, "hci_unregister_dev" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xe76ae805, "skb_queue_purge" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "pcmcia,bluetooth");

MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paBAF16FBFpb657CC15Epc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paE3987764pb2524B59Cpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa0A0736ECpb24E6DFABpc*pd*");

MODULE_INFO(srcversion, "34A761266B261211BE921B8");
