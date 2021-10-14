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
	{ 0x23f4843, "cxgbi_ppm_ppods_reserve" },
	{ 0x7021fe18, "dma_direct_unmap_sg" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x256511d6, "__kfree_skb" },
	{ 0x71f78562, "iscsi_host_remove" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x85b46c93, "iscsi_tcp_set_max_r2t" },
	{ 0xe6b0c66a, "dev_printk" },
	{ 0x1b6314fd, "in_aton" },
	{ 0x47d30afa, "cxgbi_ppm_ppod_release" },
	{ 0x4410257, "iscsi_tcp_recv_skb" },
	{ 0xa8b80792, "dst_release" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x2f586e32, "pci_dev_get" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x87b8798d, "sg_next" },
	{ 0xb00b16c1, "iscsi_unregister_transport" },
	{ 0xeab9cbd5, "iscsi_conn_get_addr_param" },
	{ 0xe90f007e, "iscsi_session_teardown" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x37dde473, "neigh_destroy" },
	{ 0x7cd06440, "iscsi_host_add" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x51e54adb, "iscsi_host_alloc" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0xe6566450, "iscsi_lookup_endpoint" },
	{ 0x753023b6, "iscsi_tcp_r2tpool_free" },
	{ 0x1d9a01e5, "iscsi_itt_to_ctask" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xba312d7b, "current_task" },
	{ 0xe6525d16, "cxgbi_ppm_init" },
	{ 0xc5850110, "printk" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x3fca0877, "iscsi_tcp_r2tpool_alloc" },
	{ 0xcc7a9d55, "iscsi_host_set_param" },
	{ 0xa42b483a, "iscsi_host_free" },
	{ 0xb60a7d32, "iscsi_suspend_tx" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x47847c32, "iscsi_destroy_endpoint" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xed48b6ea, "scsi_host_put" },
	{ 0x3785c132, "init_net" },
	{ 0x81533963, "sysfs_format_mac" },
	{ 0x389dda3a, "iscsi_tcp_conn_setup" },
	{ 0x224b5164, "vlan_dev_real_dev" },
	{ 0xae91f9fb, "ipv6_dev_get_saddr" },
	{ 0x64557eca, "iscsi_set_param" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xf720a60b, "module_put" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xfc2d702f, "__alloc_skb" },
	{ 0x5df0f16e, "ip6_route_output_flags" },
	{ 0x6fc9ef9a, "make_kuid" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x11aa2f15, "kfree_skb" },
	{ 0x12814948, "iscsi_register_transport" },
	{ 0x51407c5c, "iscsi_tcp_cleanup_task" },
	{ 0xf5017969, "iscsi_conn_queue_work" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x387604c8, "iscsi_tcp_hdr_recv_prep" },
	{ 0xd7c0409a, "cxgbi_ppm_release" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x6bfe9d3d, "iscsi_conn_failure" },
	{ 0xbb038948, "ip_route_output_flow" },
	{ 0x8ad29bab, "_raw_write_unlock_bh" },
	{ 0x150e3657, "_raw_read_lock_bh" },
	{ 0xad10eb8, "_raw_read_unlock_bh" },
	{ 0x664e951e, "iscsi_create_endpoint" },
	{ 0x37a0cba, "kfree" },
	{ 0x3ecb7f7, "dma_direct_map_sg" },
	{ 0x69acdf38, "memcpy" },
	{ 0xe0d14781, "__ip_dev_find" },
	{ 0xe1ed698d, "_raw_write_lock_bh" },
	{ 0x20e52a5, "iscsi_session_setup" },
	{ 0xb918ac63, "iscsi_host_get_param" },
	{ 0x14a46819, "iscsi_conn_bind" },
	{ 0xcb077337, "pci_dev_put" },
	{ 0x6a7fde69, "iscsi_tcp_recv_segment_is_hdr" },
	{ 0x9c160d9e, "skb_put" },
	{ 0x442639ef, "param_ops_uint" },
	{ 0xa637b975, "dma_ops" },
	{ 0xd5923e36, "cxgbi_ppm_make_ppod_hdr" },
};

MODULE_INFO(depends, "libcxgb,libiscsi,libiscsi_tcp,scsi_transport_iscsi");


MODULE_INFO(srcversion, "EA05CAB2A1F124A2DED2FB0");
