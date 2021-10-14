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
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0x3b9b8b79, "eisa_driver_unregister" },
	{ 0x7761bddc, "eisa_driver_register" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0xb18156be, "skb_pull" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x4d1a1157, "skb_push" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x23c20fb9, "netif_rx" },
	{ 0x937a218, "fddi_type_trans" },
	{ 0x9c160d9e, "skb_put" },
	{ 0x68c544c7, "dma_direct_sync_single_for_cpu" },
	{ 0x4fd745b8, "netif_tx_wake_queue" },
	{ 0x3513190d, "__dev_kfree_skb_irq" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x56470118, "__warn_printk" },
	{ 0xb01c5e76, "dev_driver_string" },
	{ 0xf7f271ce, "dma_direct_map_page" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0xd5209ccf, "__netdev_alloc_skb" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x568ff55a, "dma_direct_unmap_page" },
	{ 0xa637b975, "dma_ops" },
	{ 0x15314fce, "consume_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x963cf8c8, "get_device" },
	{ 0xd4f82b0b, "register_netdev" },
	{ 0xd9073be6, "pci_write_config_byte" },
	{ 0xa73e6a4b, "pci_set_master" },
	{ 0x7ed451da, "pci_enable_device" },
	{ 0x9ca2f355, "pci_read_config_byte" },
	{ 0x3ef84baf, "dma_alloc_attrs" },
	{ 0xc5850110, "printk" },
	{ 0x85bd1608, "__request_region" },
	{ 0xbb8e1340, "alloc_fddidev" },
	{ 0x7ea19302, "put_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8658a66c, "pci_disable_device" },
	{ 0xa80ea35, "free_netdev" },
	{ 0x1035c7c2, "__release_region" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0x445ce05b, "dma_free_attrs" },
	{ 0xc4e35547, "unregister_netdev" },
	{ 0x9a4b70e5, "eisa_bus_type" },
	{ 0xd13be7fe, "pci_bus_type" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("eisa:sDEC3001*");
MODULE_ALIAS("eisa:sDEC3002*");
MODULE_ALIAS("eisa:sDEC3003*");
MODULE_ALIAS("eisa:sDEC3004*");
MODULE_ALIAS("pci:v00001011d0000000Fsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "F2A1A0CAC01620FA9727A22");
