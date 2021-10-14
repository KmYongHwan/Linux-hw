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
	{ 0x40748904, "cdev_init" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0xdaddbd5a, "trace_handle_return" },
	{ 0x3fd78f3b, "register_chrdev_region" },
	{ 0xce13e75f, "ib_register_mad_agent" },
	{ 0xe4f5a219, "stream_open" },
	{ 0xbbd6c1d4, "ib_free_recv_mad" },
	{ 0xc373a5d1, "no_llseek" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x6bd0e573, "down_interruptible" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x69e61a65, "trace_event_buffer_reserve" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x1d39a3c5, "_dev_notice" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x2a186953, "bpf_trace_run3" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0xf5cb9fdc, "nonseekable_open" },
	{ 0x43f544fe, "ib_get_rmpp_segment" },
	{ 0xfb384d37, "kasprintf" },
	{ 0xfda9a24f, "ib_free_send_mad" },
	{ 0x82a0eab2, "rdma_destroy_ah_user" },
	{ 0xa0a6c655, "rdma_create_user_ah" },
	{ 0x613b1e2e, "ib_is_mad_class_rmpp" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xbda3d4e9, "trace_define_field" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0xba312d7b, "current_task" },
	{ 0xe9ffc063, "down_trylock" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x548bc933, "class_unregister" },
	{ 0x603afc68, "ib_mad_kernel_rmpp_agent" },
	{ 0xffb7c514, "ida_free" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xb104128c, "trace_event_reg" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x3cdf68c7, "__class_register" },
	{ 0xc6bcbebb, "ib_set_client_data" },
	{ 0xed7adcd, "rdma_destroy_ah_attr" },
	{ 0xce24f1a4, "perf_trace_run_bpf_submit" },
	{ 0xad5f0017, "perf_trace_buf_alloc" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xca1c07c5, "ib_create_send_mad" },
	{ 0xd1295c75, "ib_post_send_mad" },
	{ 0x4e155af0, "ib_response_mad" },
	{ 0xe9f2b767, "ib_unregister_mad_agent" },
	{ 0xad950225, "ib_register_client" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x93abe7cc, "trace_event_ignore_this_pid" },
	{ 0x7ea19302, "put_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x523c78db, "cdev_device_add" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x686d9036, "ib_init_ah_attr_from_wc" },
	{ 0xc410e147, "trace_event_buffer_commit" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x2f97fd3b, "rdma_dev_access_netns" },
	{ 0x6e6709fd, "event_triggers_call" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x8f08e886, "ib_modify_port" },
	{ 0x37a0cba, "kfree" },
	{ 0xa42a5626, "trace_event_raw_init" },
	{ 0x2af970a3, "device_initialize" },
	{ 0xcf2a6966, "up" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x69c3d482, "cdev_device_del" },
	{ 0x527fb529, "trace_raw_output_prep" },
	{ 0x8888b156, "trace_seq_printf" },
	{ 0x4e83cd98, "dev_set_name" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x787ccc4c, "ib_get_mad_data_offset" },
	{ 0xa292830b, "ib_unregister_client" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0xe7a02573, "ida_alloc_range" },
};

MODULE_INFO(depends, "ib_core");


MODULE_INFO(srcversion, "D475567CF4CD8E830A4825C");
