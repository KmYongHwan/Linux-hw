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
	{ 0xe3fde125, "fw_csr_iterator_next" },
	{ 0x9c1bd02b, "fw_device_enable_phys_dma" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0xf44a972b, "driver_register" },
	{ 0xfdd3a082, "__scsi_add_device" },
	{ 0xdb097c76, "scsi_host_alloc" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0xeb302fde, "scsi_add_host_with_dma" },
	{ 0x296a43df, "scsi_block_requests" },
	{ 0xb714b5c, "blk_queue_max_hw_sectors" },
	{ 0x84b88922, "scsi_remove_device" },
	{ 0xe6bbb7f8, "fw_send_request" },
	{ 0xb28a5591, "scsi_unblock_requests" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x56470118, "__warn_printk" },
	{ 0x68b6685d, "fw_bus_type" },
	{ 0x87b8798d, "sg_next" },
	{ 0xe80e5087, "fw_csr_iterator_init" },
	{ 0x3054dfcf, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xea3c8e4e, "scsilun_to_int" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x1d39a3c5, "_dev_notice" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x3c56ef91, "fw_workqueue" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xa58a74ac, "driver_unregister" },
	{ 0xf7f271ce, "dma_direct_map_page" },
	{ 0xed48b6ea, "scsi_host_put" },
	{ 0xaf19b82e, "blk_queue_update_dma_alignment" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xd1034c9c, "scsi_device_put" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x568ff55a, "dma_direct_unmap_page" },
	{ 0x389f3f71, "fw_cancel_transaction" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x3dc3ac59, "scsi_device_lookup" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xb01c5e76, "dev_driver_string" },
	{ 0x7c08cd59, "fw_core_add_address_handler" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xc0f21b2, "fw_core_remove_address_handler" },
	{ 0x37a0cba, "kfree" },
	{  0x87f87, "scsi_dma_unmap" },
	{ 0x69acdf38, "memcpy" },
	{ 0x153947c7, "scsi_remove_host" },
	{ 0x29361773, "complete" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0xaedf84ce, "fw_high_memory_region" },
	{ 0xa637b975, "dma_ops" },
	{ 0xc5703481, "fw_run_transaction" },
	{ 0x4b4db3a8, "fw_send_response" },
	{ 0xf2413189, "scsi_dma_map" },
};

MODULE_INFO(depends, "firewire-core");

MODULE_ALIAS("ieee1394:ven*mo*sp0000609Ever00010483*");

MODULE_INFO(srcversion, "C5B1A3C043CBEAD0665AF3C");
