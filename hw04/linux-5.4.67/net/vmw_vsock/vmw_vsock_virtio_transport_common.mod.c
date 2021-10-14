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
	{ 0x66e9f04d, "release_sock" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xdaddbd5a, "trace_handle_return" },
	{ 0x72f59d11, "__vsock_create" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0xb308c97d, "wait_woken" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xc79d5ef, "vm_sockets_get_local_cid" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x69e61a65, "trace_event_buffer_reserve" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x5d9043d7, "vsock_stream_has_space" },
	{ 0x943003dc, "vsock_core_get_transport" },
	{ 0x14504c17, "bpf_trace_run10" },
	{ 0xbda3d4e9, "trace_define_field" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x458d93b9, "vsock_find_connected_socket" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0xba312d7b, "current_task" },
	{ 0xbf7ecf58, "vsock_stream_has_data" },
	{ 0x9d781b9c, "lock_sock_nested" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0xb104128c, "trace_event_reg" },
	{ 0xc6eb389b, "sk_free" },
	{ 0xce24f1a4, "perf_trace_run_bpf_submit" },
	{ 0xad5f0017, "perf_trace_buf_alloc" },
	{ 0xd0654aba, "woken_wake_function" },
	{ 0xfc2d702f, "__alloc_skb" },
	{ 0x73879664, "vsock_addr_init" },
	{ 0x93abe7cc, "trace_event_ignore_this_pid" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xa538ceb7, "_copy_from_iter_full" },
	{ 0xdca84968, "vsock_find_bound_socket" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xc410e147, "trace_event_buffer_commit" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xff3b0054, "bpf_trace_run8" },
	{ 0x6e6709fd, "event_triggers_call" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x61520529, "trace_print_symbols_seq" },
	{ 0xa42a5626, "trace_event_raw_init" },
	{ 0xa718a5b9, "vsock_deliver_tap" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x40b8cfdf, "vsock_remove_sock" },
	{ 0x527fb529, "trace_raw_output_prep" },
	{ 0x8888b156, "trace_seq_printf" },
	{ 0x9c160d9e, "skb_put" },
	{ 0xef9972e, "vsock_insert_connected" },
	{ 0x523cfbfd, "_copy_to_iter" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xf254fb36, "vsock_enqueue_accept" },
};

MODULE_INFO(depends, "vsock");


MODULE_INFO(srcversion, "2DEA9A7B850E4657F1A1DE1");
