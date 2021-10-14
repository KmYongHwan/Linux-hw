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
	{ 0x266a1ac9, "sas_change_queue_depth" },
	{ 0x7021fe18, "dma_direct_unmap_sg" },
	{ 0xca175299, "sas_release_transport" },
	{ 0x2877d775, "pci_free_irq_vectors" },
	{ 0xdb097c76, "scsi_host_alloc" },
	{ 0x73633a3, "pcim_enable_device" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0xeb302fde, "scsi_add_host_with_dma" },
	{ 0x1e4d26af, "pcim_iomap_table" },
	{ 0x542eecc5, "sas_drain_work" },
	{ 0xf189e453, "dma_set_mask" },
	{ 0xfc5c5a45, "sas_ssp_task_response" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x8658a66c, "pci_disable_device" },
	{ 0xbbbc5e34, "sas_suspend_ha" },
	{ 0x56470118, "__warn_printk" },
	{ 0x87b8798d, "sg_next" },
	{ 0xa5e08bb8, "sas_task_abort" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x9249dbad, "pci_biosrom_size" },
	{ 0xce52237b, "sas_phy_reset" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x848c50b5, "sas_eh_target_reset_handler" },
	{ 0x9078fc, "dma_set_coherent_mask" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x6f40c304, "sas_get_local_phy" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xa73e6a4b, "pci_set_master" },
	{ 0x4a8e3d34, "try_test_sas_gpio_gp_bit" },
	{ 0xb6a11f8, "scsi_is_host_device" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x9118b456, "pci_alloc_irq_vectors_affinity" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x7e806c57, "sas_target_alloc" },
	{ 0x2ed7bb5f, "pci_restore_state" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xba312d7b, "current_task" },
	{ 0xc5850110, "printk" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xe7b00dfb, "__x86_indirect_thunk_r13" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xd07203bc, "sas_ioctl" },
	{ 0xf7f271ce, "dma_direct_map_page" },
	{ 0xedfedd2e, "scsi_scan_host" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xed48b6ea, "scsi_host_put" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xa0f493d9, "efi" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x182e4e12, "sas_unregister_ha" },
	{ 0x9df75a65, "pcim_iomap_regions" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x568ff55a, "dma_direct_unmap_page" },
	{ 0x9a43e199, "_dev_info" },
	{ 0xd88c6bb3, "sas_register_ha" },
	{ 0xf8302afc, "pci_map_biosrom" },
	{ 0xb256cf2b, "sas_eh_abort_handler" },
	{ 0x741737ff, "sas_resume_ha" },
	{ 0x8cba6c0b, "devm_free_irq" },
	{ 0x7ea19302, "put_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x672a2fa2, "sas_target_destroy" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xa231c2bc, "sas_eh_device_reset_handler" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0x3676662e, "sas_queuecommand" },
	{ 0xb01c5e76, "dev_driver_string" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x81cd9905, "sas_ata_schedule_reset" },
	{ 0xeedb56d3, "sas_remove_host" },
	{ 0x84972054, "param_ops_byte" },
	{ 0xc78cbbeb, "pci_irq_vector" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xefca05d5, "pci_set_power_state" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x7dcd6615, "sas_bios_param" },
	{ 0x3ecb7f7, "dma_direct_map_sg" },
	{ 0x69acdf38, "memcpy" },
	{ 0x7d628444, "memcpy_fromio" },
	{ 0x530c85ed, "sas_prep_resume_ha" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0x71deb539, "request_firmware" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x326425ca, "pci_unmap_biosrom" },
	{ 0x153947c7, "scsi_remove_host" },
	{ 0xb21aa7bc, "dmam_alloc_attrs" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x722a53d5, "param_ops_ushort" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xc6fd954e, "sas_slave_configure" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x442639ef, "param_ops_uint" },
	{ 0xbca28682, "devm_request_threaded_irq" },
	{ 0xede283d, "release_firmware" },
	{ 0x9777dc32, "sas_domain_attach_transport" },
	{ 0xa637b975, "dma_ops" },
	{ 0x896845d2, "pci_save_state" },
};

MODULE_INFO(depends, "libsas,scsi_transport_sas");

MODULE_ALIAS("pci:v00008086d00001D61sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001D63sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001D65sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001D67sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001D69sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001D6Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001D60sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001D62sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001D64sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001D66sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001D68sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001D6Asv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "8E005C529073FD21E7F6115");
