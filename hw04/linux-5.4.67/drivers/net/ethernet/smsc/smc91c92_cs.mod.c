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
	{ 0x23c20fb9, "netif_rx" },
	{ 0x57c0cb89, "eth_type_trans" },
	{ 0x9c160d9e, "skb_put" },
	{ 0xd5209ccf, "__netdev_alloc_skb" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x7404840e, "mii_ethtool_get_link_ksettings" },
	{ 0x8f996a30, "ethtool_convert_legacy_u32_to_link_mode" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x37a0cba, "kfree" },
	{ 0x4f1ed701, "pcmcia_get_tuple" },
	{ 0x1d39a3c5, "_dev_notice" },
	{ 0x79e84d4f, "pcmcia_loop_tuple" },
	{ 0xd4f82b0b, "register_netdev" },
	{ 0x6a246551, "pcmcia_get_mac_from_cis" },
	{ 0x5e11012c, "pcmcia_enable_device" },
	{ 0xe94d2b89, "pcmcia_request_irq" },
	{ 0x6d1d72a0, "pcmcia_map_mem_page" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x41aeb27c, "pcmcia_request_window" },
	{ 0xa187fc9, "pcmcia_loop_config" },
	{ 0x2192013e, "alloc_etherdev_mqs" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x7d22237c, "pcmcia_dev_present" },
	{ 0xb8bca87, "pcmcia_fixup_iowidth" },
	{ 0xf29affd6, "netif_device_attach" },
	{ 0xc5850110, "printk" },
	{ 0xede283d, "release_firmware" },
	{ 0x71deb539, "request_firmware" },
	{ 0x742f5665, "pcmcia_parse_tuple" },
	{ 0x754d539c, "strlen" },
	{ 0x946cde34, "pcmcia_request_io" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x15314fce, "consume_skb" },
	{ 0xe5c0e769, "netdev_warn" },
	{ 0x4b2dcc89, "netdev_err" },
	{ 0x3513190d, "__dev_kfree_skb_irq" },
	{ 0x49951708, "sev_enable_key" },
	{ 0x68fb4f56, "generic_mii_ioctl" },
	{ 0xf3744f5f, "netdev_info" },
	{ 0x4fd745b8, "netif_tx_wake_queue" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x5a03a8c6, "netdev_notice" },
	{ 0x90de418b, "mii_nway_restart" },
	{ 0xc002153b, "mii_link_ok" },
	{ 0x5d4b2462, "mii_ethtool_set_link_ksettings" },
	{ 0xa80ea35, "free_netdev" },
	{ 0xc4e35547, "unregister_netdev" },
	{ 0xedc03953, "iounmap" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0xce0f8ba1, "pcmcia_disable_device" },
	{ 0xbb61b5d4, "netif_device_detach" },
	{ 0x526c95e, "__dynamic_netdev_dbg" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "pcmcia,mii");

MODULE_ALIAS("pcmcia:m0109c0501f*fn*pfn00pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m0140c000Af*fn*pfn00pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn00paF510DB04pb04CD2988pc46A52D63pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn00paF510DB04pb0143B773pc46A52D63pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn00paF510DB04pb856D66C8pcBD6C43EFpd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn00paF510DB04pb52D21E1EpcBD6C43EFpd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn00paDD9989BEpb662C394Cpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn00paF510DB04pb52D21E1Epc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn00pa0C2F80CDpb656947B9pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn00pa0C2F80CDpbDC9BA5EDpc*pd*");
MODULE_ALIAS("pcmcia:m016Cc0020f*fn00pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m016Cc0023f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa23C78A9Dpb00B2E941pcCEF397FBpd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa78F308DCpbDCEA68BCpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paE59365C8pb6A2161D1pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa6A26D1CFpbC16CE9C5pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa58D93FC4pb244734E9pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa33234748pb3C95B953pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paA2CD8E6Dpb42DA662Apc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa0C2F80CDpbB3466314pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa0C2F80CDpb194B650Apc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa281F1C5DpbDCEA68BCpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa4EF00B21pb844BE9E9pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paC4F8B18Bpb4A0EEB2Dpc*pd*");

MODULE_INFO(srcversion, "13B9DA273946DEA84C5A48F");
