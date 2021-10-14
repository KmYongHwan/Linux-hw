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
	{ 0x132c593a, "isa_unregister_driver" },
	{ 0x3b9b8b79, "eisa_driver_unregister" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0x7761bddc, "eisa_driver_register" },
	{ 0xb0ab8c89, "isa_register_driver" },
	{ 0x85bd1608, "__request_region" },
	{ 0xd9073be6, "pci_write_config_byte" },
	{ 0xdb097c76, "scsi_host_alloc" },
	{ 0x9ca2f355, "pci_read_config_byte" },
	{ 0xa73e6a4b, "pci_set_master" },
	{ 0xbaed66b, "pci_request_regions" },
	{ 0x7ed451da, "pci_enable_device" },
	{ 0x754e62f4, "dma_pool_create" },
	{ 0x3ef84baf, "dma_alloc_attrs" },
	{ 0xedfedd2e, "scsi_scan_host" },
	{ 0xeb302fde, "scsi_add_host_with_dma" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x40fb4f1b, "pci_read_config_word" },
	{ 0x4d87e644, "pci_ioremap_bar" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x56470118, "__warn_printk" },
	{ 0xb01c5e76, "dev_driver_string" },
	{ 0x678b96ec, "dma_pool_alloc" },
	{ 0x6f2613d1, "scmd_printk" },
	{ 0x263ed23b, "__x86_indirect_thunk_r12" },
	{ 0x87b8798d, "sg_next" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf7f271ce, "dma_direct_map_page" },
	{ 0x69acdf38, "memcpy" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xf2413189, "scsi_dma_map" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x1035c7c2, "__release_region" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0x8658a66c, "pci_disable_device" },
	{ 0x22690c6a, "pci_release_regions" },
	{ 0x37a0cba, "kfree" },
	{ 0xed48b6ea, "scsi_host_put" },
	{ 0xedc03953, "iounmap" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x153947c7, "scsi_remove_host" },
	{ 0x568ff55a, "dma_direct_unmap_page" },
	{ 0xa637b975, "dma_ops" },
	{ 0x2f7754a8, "dma_pool_free" },
	{ 0x3d943849, "blk_mq_tag_to_rq" },
	{ 0xe98a304a, "scsi_change_queue_depth" },
	{ 0xc5850110, "printk" },
	{ 0xede283d, "release_firmware" },
	{ 0x71deb539, "request_firmware" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xcaeffb3f, "scsi_host_busy" },
	{ 0x6168380e, "seq_putc" },
	{ 0x9cb39373, "seq_puts" },
	{ 0xc4142837, "seq_printf" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xe6b0c66a, "dev_printk" },
	{ 0xa916b694, "strnlen" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{  0x87f87, "scsi_dma_unmap" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xb5aa7165, "dma_pool_destroy" },
	{ 0x445ce05b, "dma_free_attrs" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v000010CDd00001100sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010CDd00001200sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010CDd00001300sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010CDd00002300sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010CDd00002500sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010CDd00002700sv*sd*bc*sc*i*");
MODULE_ALIAS("eisa:sABP7401*");
MODULE_ALIAS("eisa:sABP7501*");

MODULE_INFO(srcversion, "A959299C15F7FD6417024C3");
