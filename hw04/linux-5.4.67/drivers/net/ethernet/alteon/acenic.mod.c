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
	{ 0xaad49c42, "param_array_ops" },
	{ 0xb1da8e4, "eth_validate_addr" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0x4fd745b8, "netif_tx_wake_queue" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x23c20fb9, "netif_rx" },
	{ 0x57c0cb89, "eth_type_trans" },
	{ 0x9c160d9e, "skb_put" },
	{ 0x3513190d, "__dev_kfree_skb_irq" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x568ff55a, "dma_direct_unmap_page" },
	{ 0x15314fce, "consume_skb" },
	{ 0xc4e35547, "unregister_netdev" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xd4f82b0b, "register_netdev" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xede283d, "release_firmware" },
	{ 0x71deb539, "request_firmware" },
	{ 0xfb578fc5, "memset" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0xf189e453, "dma_set_mask" },
	{ 0x3ef84baf, "dma_alloc_attrs" },
	{ 0xc1c9587a, "pci_write_config_word" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xa80ea35, "free_netdev" },
	{ 0xd9073be6, "pci_write_config_byte" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x9ca2f355, "pci_read_config_byte" },
	{ 0x40fb4f1b, "pci_read_config_word" },
	{ 0xa73e6a4b, "pci_set_master" },
	{ 0x7ed451da, "pci_enable_device" },
	{ 0x2192013e, "alloc_etherdev_mqs" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xf7f271ce, "dma_direct_map_page" },
	{ 0xa637b975, "dma_ops" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xd5209ccf, "__netdev_alloc_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x5792f848, "strlcpy" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x8f996a30, "ethtool_convert_legacy_u32_to_link_mode" },
	{ 0xc5850110, "printk" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xedc03953, "iounmap" },
	{ 0x37a0cba, "kfree" },
	{ 0x445ce05b, "dma_free_attrs" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v000012AEd00000001sv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v000012AEd00000002sv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v000010B7d00000001sv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v00001385d0000620Asv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v00001385d0000630Asv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v00001011d0000001Asv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v000012AEd000000FAsv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v000010A9d00000009sv*sd*bc02sc00i*");

MODULE_INFO(srcversion, "9403E74318F8CF10F4CD8D0");
