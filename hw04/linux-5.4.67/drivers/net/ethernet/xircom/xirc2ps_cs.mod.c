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
	{ 0x23c20fb9, "netif_rx" },
	{ 0x57c0cb89, "eth_type_trans" },
	{ 0x9c160d9e, "skb_put" },
	{ 0xd5209ccf, "__netdev_alloc_skb" },
	{ 0xf29affd6, "netif_device_attach" },
	{ 0x4fd745b8, "netif_tx_wake_queue" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x7d22237c, "pcmcia_dev_present" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x6d1d72a0, "pcmcia_map_mem_page" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x41aeb27c, "pcmcia_request_window" },
	{ 0x2597288d, "pcmcia_write_config_byte" },
	{ 0x79e84d4f, "pcmcia_loop_tuple" },
	{ 0x37a0cba, "kfree" },
	{ 0x1e6d26a8, "strstr" },
	{ 0xc5850110, "printk" },
	{ 0xd4f82b0b, "register_netdev" },
	{ 0x5e11012c, "pcmcia_enable_device" },
	{ 0xe94d2b89, "pcmcia_request_irq" },
	{ 0xa187fc9, "pcmcia_loop_config" },
	{ 0x6a246551, "pcmcia_get_mac_from_cis" },
	{ 0x4f1ed701, "pcmcia_get_tuple" },
	{ 0x2192013e, "alloc_etherdev_mqs" },
	{ 0xf3744f5f, "netdev_info" },
	{ 0xf9a482f9, "msleep" },
	{ 0x946cde34, "pcmcia_request_io" },
	{ 0x11d80dd4, "__skb_pad" },
	{ 0x15314fce, "consume_skb" },
	{ 0x49951708, "sev_enable_key" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x5a03a8c6, "netdev_notice" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xa80ea35, "free_netdev" },
	{ 0xc4e35547, "unregister_netdev" },
	{ 0xedc03953, "iounmap" },
	{ 0xce0f8ba1, "pcmcia_disable_device" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xbb61b5d4, "netif_device_detach" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "pcmcia");

MODULE_ALIAS("pcmcia:m0089c110Af*fn*pfn00pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m0138c110Af*fn*pfn00pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn00pa2E3EE845pb*pc0EA978EApd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn00pa2E3EE845pb*pc80609023pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn00pa2E3EE845pb*pcA650C32Apd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn00pa2E3EE845pb*pc76DF1D29pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn00pa2E3EE845pb*pcF1403719pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn00pa2E3EE845pbECA401BFpc*pd*");
MODULE_ALIAS("pcmcia:m01BFc010Af*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa1B3B94FEpb*pcF381C1A2pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa2E3EE845pb*pc0EC0AC37pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa2E3EE845pb*pc947D9073pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa2E3EE845pb*pc2464A6E3pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa2E3EE845pb*pc3E08D609pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa2E3EE845pb*pcF7188E46pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa54F7C49Cpb9FD2F0A2pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa54F7C49CpbEFE96769pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa816CC815pb174397DBpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa44A09D9CpbB44DEECFpc*pd*");

MODULE_INFO(srcversion, "13634A5F5574905A40562D1");
