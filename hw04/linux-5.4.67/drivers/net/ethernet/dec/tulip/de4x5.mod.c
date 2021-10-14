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
	{ 0xd727ef13, "param_ops_charp" },
	{ 0xb1da8e4, "eth_validate_addr" },
	{ 0xb3b84165, "eth_mac_addr" },
	{ 0x3b9b8b79, "eisa_driver_unregister" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0x7761bddc, "eisa_driver_register" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x23c20fb9, "netif_rx" },
	{ 0x57c0cb89, "eth_type_trans" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xc1c9587a, "pci_write_config_word" },
	{ 0x9ca2f355, "pci_read_config_byte" },
	{ 0x40fb4f1b, "pci_read_config_word" },
	{ 0x7ed451da, "pci_enable_device" },
	{ 0x2192013e, "alloc_etherdev_mqs" },
	{ 0x85bd1608, "__request_region" },
	{ 0x445ce05b, "dma_free_attrs" },
	{ 0xd4f82b0b, "register_netdev" },
	{ 0x3ef84baf, "dma_alloc_attrs" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x754d539c, "strlen" },
	{ 0xa916b694, "strnlen" },
	{ 0x1e6d26a8, "strstr" },
	{ 0x9166fada, "strncpy" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x11aa2f15, "kfree_skb" },
	{ 0x88c30f54, "__dev_kfree_skb_any" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x69acdf38, "memcpy" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xc6cbbc89, "capable" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x56470118, "__warn_printk" },
	{ 0xb01c5e76, "dev_driver_string" },
	{ 0xf7f271ce, "dma_direct_map_page" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x568ff55a, "dma_direct_unmap_page" },
	{ 0xa637b975, "dma_ops" },
	{ 0x3513190d, "__dev_kfree_skb_irq" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8658a66c, "pci_disable_device" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x9c160d9e, "skb_put" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xd5209ccf, "__netdev_alloc_skb" },
	{ 0x15314fce, "consume_skb" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x4fd745b8, "netif_tx_wake_queue" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xd9073be6, "pci_write_config_byte" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xc5850110, "printk" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x1035c7c2, "__release_region" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0xa80ea35, "free_netdev" },
	{ 0xc4e35547, "unregister_netdev" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("eisa:sDEC4250*");

MODULE_INFO(srcversion, "734081B4DA7AE829EFC0DFC");
