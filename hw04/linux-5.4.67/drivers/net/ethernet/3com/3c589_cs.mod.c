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
	{ 0xeed57dfe, "param_ops_int" },
	{ 0xb1da8e4, "eth_validate_addr" },
	{ 0xb3b84165, "eth_mac_addr" },
	{ 0xdc7e867e, "pcmcia_unregister_driver" },
	{ 0x7da5d7a, "pcmcia_register_driver" },
	{ 0x24d273d1, "add_timer" },
	{ 0x4b2dcc89, "netdev_err" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xf29affd6, "netif_device_attach" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd4f82b0b, "register_netdev" },
	{ 0x37a0cba, "kfree" },
	{ 0x4f1ed701, "pcmcia_get_tuple" },
	{ 0x5e11012c, "pcmcia_enable_device" },
	{ 0xe94d2b89, "pcmcia_request_irq" },
	{ 0x946cde34, "pcmcia_request_io" },
	{ 0x2192013e, "alloc_etherdev_mqs" },
	{ 0x23c20fb9, "netif_rx" },
	{ 0x57c0cb89, "eth_type_trans" },
	{ 0x9c160d9e, "skb_put" },
	{ 0xd5209ccf, "__netdev_alloc_skb" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x15314fce, "consume_skb" },
	{ 0x49951708, "sev_enable_key" },
	{ 0x4fd745b8, "netif_tx_wake_queue" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xf3744f5f, "netdev_info" },
	{ 0xe5c0e769, "netdev_warn" },
	{ 0x7d22237c, "pcmcia_dev_present" },
	{ 0x526c95e, "__dynamic_netdev_dbg" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0xa80ea35, "free_netdev" },
	{ 0xce0f8ba1, "pcmcia_disable_device" },
	{ 0xc4e35547, "unregister_netdev" },
	{ 0xbb61b5d4, "netif_device_detach" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "pcmcia");

MODULE_ALIAS("pcmcia:m0101c0562f*fn00pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn00pfn*paF03E4E77pb*pc*pd*");
MODULE_ALIAS("pcmcia:m0101c0589f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa58D93FC4pb992C2202pc*pd*");
MODULE_ALIAS("pcmcia:m0101c0035f*fn00pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m0101c003Df*fn00pfn*pa*pb*pc*pd*");

MODULE_INFO(srcversion, "FDE48BBB6021088A774EAE5");
