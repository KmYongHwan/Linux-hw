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
	{ 0x2d3385d3, "system_wq" },
	{ 0x3ee01a98, "ishtp_cl_io_rb_recycle" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf345307a, "ishtp_cl_unlink" },
	{ 0xdfb46d9c, "ishtp_set_connection_state" },
	{ 0xa0c0c33e, "ishtp_cl_driver_register" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0x30583be4, "ishtp_cl_flush_queues" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x41274e72, "ishtp_put_device" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xad5e837, "ishtp_cl_connect" },
	{ 0xe8ca046c, "ishtp_set_rx_ring_size" },
	{ 0xc805f93, "clflush_cache_range" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xf55b1fba, "ishtp_cl_driver_unregister" },
	{ 0x640350b8, "ishtp_device" },
	{ 0xec188fce, "ishtp_cl_link" },
	{ 0xd6e604ce, "ish_hw_reset" },
	{ 0x3d81c730, "ishtp_cl_disconnect" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x5f9b0501, "ishtp_get_fw_client_id" },
	{ 0xc816072e, "ishtp_fw_cl_get_client" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xf7f271ce, "dma_direct_map_page" },
	{ 0x49b323d8, "device_property_read_string" },
	{ 0xf1f695e5, "ishtp_get_pci_device" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x568ff55a, "dma_direct_unmap_page" },
	{ 0x9501ee22, "ishtp_register_event_cb" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x115c65e4, "ishtp_get_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x44a228e7, "ishtp_set_drvdata" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xb01c5e76, "dev_driver_string" },
	{ 0x38c85b9d, "ishtp_get_client_data" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0xd4b74c09, "ishtp_set_tx_ring_size" },
	{ 0xf5084c42, "ishtp_set_client_data" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xa93aab8c, "ishtp_get_drvdata" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xea2a429f, "ishtp_cl_set_fw_client_id" },
	{ 0x886dbd59, "ishtp_cl_free" },
	{ 0x135f9e2b, "dma_direct_sync_single_for_device" },
	{ 0x71deb539, "request_firmware" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x829ec51e, "ishtp_cl_send" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x97e4ca14, "ishtp_cl_allocate" },
	{ 0x709c2237, "ishtp_get_ishtp_device" },
	{ 0xede283d, "release_firmware" },
	{ 0xa637b975, "dma_ops" },
	{ 0x38055494, "ishtp_cl_rx_get_rb" },
};

MODULE_INFO(depends, "intel-ishtp");


MODULE_INFO(srcversion, "5501EF58F328E90BA56E375");
