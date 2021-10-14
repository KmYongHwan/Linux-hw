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
	{ 0xe9785731, "unregister_hdlc_protocol" },
	{ 0x5776d2e9, "register_hdlc_protocol" },
	{ 0x11aa2f15, "kfree_skb" },
	{ 0x23c20fb9, "netif_rx" },
	{ 0x57c0cb89, "eth_type_trans" },
	{ 0xb18156be, "skb_pull" },
	{ 0x17fc86f3, "skb_clone" },
	{ 0x88c30f54, "__dev_kfree_skb_any" },
	{ 0xd5209ccf, "__netdev_alloc_skb" },
	{ 0xe5c0e769, "netdev_warn" },
	{ 0xa80ea35, "free_netdev" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xbc0907b0, "ether_setup" },
	{ 0x8a5087f2, "call_netdevice_notifiers" },
	{ 0x359b59ff, "attach_hdlc_protocol" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xea4c5e82, "register_netdevice" },
	{ 0x6fe86ad9, "alloc_netdev_mqs" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xc6cbbc89, "capable" },
	{ 0x24d273d1, "add_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x97e005d1, "netif_carrier_on" },
	{ 0x34b60257, "netif_carrier_off" },
	{ 0xdb6be758, "linkwatch_fire_event" },
	{ 0xf04187ce, "dev_close" },
	{ 0x5f80123f, "unregister_netdevice_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x2d5f37, "dev_queue_xmit" },
	{ 0xfb578fc5, "memset" },
	{ 0x9c160d9e, "skb_put" },
	{ 0x32558580, "pskb_expand_head" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x15314fce, "consume_skb" },
	{ 0x55f384b9, "skb_realloc_headroom" },
	{ 0x4d1a1157, "skb_push" },
	{ 0xf3744f5f, "netdev_info" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "hdlc");


MODULE_INFO(srcversion, "961AD32E96C623FDB128FA0");
