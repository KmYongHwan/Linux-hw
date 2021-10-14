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
	{ 0x88c30f54, "__dev_kfree_skb_any" },
	{ 0x74819a8, "lapb_data_received" },
	{ 0x17fc86f3, "skb_clone" },
	{ 0x4d1a1157, "skb_push" },
	{ 0x11aa2f15, "kfree_skb" },
	{ 0x32558580, "pskb_expand_head" },
	{ 0xdb6be758, "linkwatch_fire_event" },
	{ 0x8a5087f2, "call_netdevice_notifiers" },
	{ 0x359b59ff, "attach_hdlc_protocol" },
	{ 0xc6cbbc89, "capable" },
	{ 0x66d5b76f, "lapb_disconnect_request" },
	{ 0x9ba6def2, "lapb_data_request" },
	{ 0xb18156be, "skb_pull" },
	{ 0x1a1f3af0, "lapb_connect_request" },
	{ 0x15314fce, "consume_skb" },
	{ 0x4b2dcc89, "netdev_err" },
	{ 0x23c20fb9, "netif_rx" },
	{ 0x9c160d9e, "skb_put" },
	{ 0xd5209ccf, "__netdev_alloc_skb" },
	{ 0x1e0451f2, "dev_queue_xmit_nit" },
	{ 0xb1bb9a91, "dev_nit_active" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x7ae4cc3b, "lapb_register" },
	{ 0x2935858f, "lapb_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "hdlc,lapb");


MODULE_INFO(srcversion, "263405533C578E957FAE507");
