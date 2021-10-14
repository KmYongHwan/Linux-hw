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
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xee6537d9, "blk_queue_rq_timeout" },
	{ 0x45d246da, "node_to_cpumask_map" },
	{ 0xe98a304a, "scsi_change_queue_depth" },
	{ 0xadf9f29e, "vmbus_sendpacket_mpb_desc" },
	{ 0xdd8e542e, "__hv_pkt_iter_next" },
	{ 0xdb097c76, "scsi_host_alloc" },
	{ 0xfbad3cf0, "scsi_normalize_sense" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0xeb302fde, "scsi_add_host_with_dma" },
	{ 0x84b88922, "scsi_remove_device" },
	{ 0x56470118, "__warn_printk" },
	{ 0x375aff77, "__vmbus_driver_register" },
	{ 0x87b8798d, "sg_next" },
	{ 0x1f9eaff9, "vmbus_set_sc_create_callback" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xcd01428b, "hv_pkt_iter_close" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x596660b2, "scsi_rescan_device" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0x46a417ca, "vmbus_proto_version" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xedfedd2e, "scsi_scan_host" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xbba70f96, "vmbus_open" },
	{ 0xed48b6ea, "scsi_host_put" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xd1034c9c, "scsi_device_put" },
	{ 0xf2f9d256, "fc_release_transport" },
	{ 0x618911fc, "numa_node" },
	{ 0xd1f3d9fc, "scsi_add_device" },
	{ 0xa3130988, "scsi_host_get" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xfd88423f, "fc_remote_port_delete" },
	{ 0x1000e51, "schedule" },
	{ 0x3dc3ac59, "scsi_device_lookup" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xfd3902a5, "scsi_test_unit_ready" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x1689a306, "vmbus_close" },
	{ 0x63ff75a3, "__scsi_iterate_devices" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x7096e223, "fc_eh_timed_out" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xb7cbe876, "hv_pkt_iter_first" },
	{ 0x5ecdac6f, "vmbus_sendpacket" },
	{ 0x7aff77a3, "__cpu_present_mask" },
	{ 0x19911d6f, "fc_remove_host" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0x153947c7, "scsi_remove_host" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x3cd6bd1c, "fc_remote_port_add" },
	{ 0xa084f79f, "cpumask_next_wrap" },
	{ 0xc60d0620, "__num_online_cpus" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xd49808d6, "fc_attach_transport" },
	{ 0xa71f006f, "scsi_print_sense_hdr" },
	{ 0xb27f114a, "vmbus_driver_unregister" },
};

MODULE_INFO(depends, "hv_vmbus,scsi_transport_fc");

MODULE_ALIAS("vmbus:d96361baa104294db60572e2ffb1dc7f");
MODULE_ALIAS("vmbus:32264132cb86a2449b5c50d1417354f5");
MODULE_ALIAS("vmbus:4acc9b2f6900f34ab76b6fd0be528cda");

MODULE_INFO(srcversion, "AC8AF52632671278A7AF163");
