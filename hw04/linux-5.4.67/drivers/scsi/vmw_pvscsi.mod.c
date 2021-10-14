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
	{ 0x3054dfcf, "param_ops_bool" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x56470118, "__warn_printk" },
	{ 0xb01c5e76, "dev_driver_string" },
	{ 0x87b8798d, "sg_next" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xf7f271ce, "dma_direct_map_page" },
	{ 0xf2413189, "scsi_dma_map" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x153947c7, "scsi_remove_host" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x6f2613d1, "scmd_printk" },
	{ 0x29361773, "complete" },
	{ 0x568ff55a, "dma_direct_unmap_page" },
	{ 0xa637b975, "dma_ops" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{  0x87f87, "scsi_dma_unmap" },
	{ 0xedfedd2e, "scsi_scan_host" },
	{ 0x9a43e199, "_dev_info" },
	{ 0xeb302fde, "scsi_add_host_with_dma" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x9118b456, "pci_alloc_irq_vectors_affinity" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xdb097c76, "scsi_host_alloc" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x3ef84baf, "dma_alloc_attrs" },
	{ 0xa73e6a4b, "pci_set_master" },
	{ 0xcfa0d077, "pci_iomap" },
	{ 0x8658a66c, "pci_disable_device" },
	{ 0xbaed66b, "pci_request_regions" },
	{ 0x9078fc, "dma_set_coherent_mask" },
	{ 0xf189e453, "dma_set_mask" },
	{ 0x7ed451da, "pci_enable_device" },
	{ 0xed48b6ea, "scsi_host_put" },
	{ 0xd1f3d9fc, "scsi_add_device" },
	{ 0xd1034c9c, "scsi_device_put" },
	{ 0x84b88922, "scsi_remove_device" },
	{ 0x3dc3ac59, "scsi_device_lookup" },
	{ 0xa3130988, "scsi_host_get" },
	{ 0xc5850110, "printk" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xfb578fc5, "memset" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xe98a304a, "scsi_change_queue_depth" },
	{ 0x445ce05b, "dma_free_attrs" },
	{ 0x37a0cba, "kfree" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x22690c6a, "pci_release_regions" },
	{ 0xcbafa6b5, "pci_iounmap" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x2877d775, "pci_free_irq_vectors" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xc78cbbeb, "pci_irq_vector" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v000015ADd000007C0sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "79F43C710731C282FEF27EB");
