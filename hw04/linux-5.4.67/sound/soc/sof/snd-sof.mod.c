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
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xaf45d87b, "pci_write_config_dword" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x179f97c3, "debugfs_create_dir" },
	{ 0x143a81a1, "snd_soc_tplg_widget_bind_event" },
	{ 0x810a31e8, "snd_pcm_hw_constraint_step" },
	{ 0x6dab80b0, "snd_pcm_period_elapsed" },
	{ 0xfabf09e, "snd_soc_find_dai" },
	{ 0xcdfd2681, "snd_dma_alloc_pages" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x61b322bf, "snd_pcm_lib_preallocate_pages" },
	{ 0x3d32ae7, "platform_device_register_full" },
	{ 0xc8ec3594, "debugfs_create_file" },
	{ 0xc3b095e1, "debugfs_remove_recursive" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x9113120c, "devm_kasprintf" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xfb384d37, "kasprintf" },
	{ 0x92bd2e7f, "snd_soc_tplg_component_remove" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0xdb727165, "snd_pcm_sgbuf_ops_page" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0xdefbea52, "default_llseek" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xba312d7b, "current_task" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xcedfc4c5, "snd_soc_tplg_component_load" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x24595cf6, "snd_pcm_lib_free_pages" },
	{ 0x1f589e38, "platform_device_unregister" },
	{ 0x17e7d2e9, "snd_pcm_lib_ioctl" },
	{ 0x7d22f0d5, "simple_open" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x9cf37c44, "__iowrite32_copy" },
	{ 0x7aeafe04, "snd_pcm_lib_malloc_pages" },
	{ 0x22ea672b, "snd_soc_rtdcom_lookup" },
	{ 0x9a43e199, "_dev_info" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xa916b694, "strnlen" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xb9e7429c, "memcpy_toio" },
	{ 0x40dc72fb, "devm_snd_soc_register_component" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x5edd2a6c, "snd_dma_free_pages" },
	{ 0xe3e53082, "pci_read_config_dword" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xbb4f4766, "simple_write_to_buffer" },
	{ 0x68a24153, "snd_pcm_format_physical_width" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x7d628444, "memcpy_fromio" },
	{ 0x71deb539, "request_firmware" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x4a453f53, "iowrite32" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xede283d, "release_firmware" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xe484e35f, "ioread32" },
};

MODULE_INFO(depends, "snd-pcm,snd-soc-core");


MODULE_INFO(srcversion, "269A4BEB2090223D62113E4");
