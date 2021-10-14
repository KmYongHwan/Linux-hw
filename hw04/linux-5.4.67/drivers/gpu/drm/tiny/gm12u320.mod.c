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
	{ 0x3054dfcf, "param_ops_bool" },
	{ 0xcc10d7f, "drm_atomic_helper_connector_destroy_state" },
	{ 0x63322608, "drm_atomic_helper_connector_duplicate_state" },
	{ 0xb80a5411, "drm_connector_cleanup" },
	{ 0x6c2b480d, "drm_helper_probe_single_connector_modes" },
	{ 0xe85d5ee4, "drm_atomic_helper_connector_reset" },
	{ 0xc344af18, "drm_release" },
	{ 0xcdc40c6e, "drm_open" },
	{ 0x6361f76a, "drm_gem_shmem_mmap" },
	{ 0xfb9c4ea1, "drm_compat_ioctl" },
	{ 0x1edd586c, "drm_ioctl" },
	{ 0xea43a0e3, "drm_poll" },
	{ 0xb245c251, "drm_read" },
	{ 0x752832c, "noop_llseek" },
	{ 0x2de767e, "drm_gem_shmem_dumb_create" },
	{ 0x55e801ae, "drm_gem_prime_mmap" },
	{ 0xa9de5a39, "drm_gem_shmem_prime_import_sg_table" },
	{ 0xeaf7a216, "drm_gem_prime_fd_to_handle" },
	{ 0x3cde5b42, "drm_gem_prime_handle_to_fd" },
	{ 0x7e94ed1, "drm_atomic_helper_commit" },
	{ 0x958579ef, "drm_atomic_helper_check" },
	{ 0x3797f6c0, "drm_gem_fb_create_with_dirty" },
	{ 0x5c85af9b, "usb_deregister" },
	{ 0x9ce89892, "usb_register_driver" },
	{ 0x297fa670, "drm_fbdev_generic_setup" },
	{ 0xf088322, "drm_dev_register" },
	{ 0x52cca85c, "drm_mode_config_reset" },
	{ 0xd73bff89, "drm_simple_display_pipe_init" },
	{ 0x44403596, "drm_connector_init" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0xeb667e56, "drm_mode_config_init" },
	{ 0x1d06f8c9, "drm_dev_init" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xd14cf43a, "drm_add_edid_modes" },
	{ 0x2f8a7908, "drm_connector_update_edid_property" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa7f013f9, "drm_dev_printk" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x2ba2c9cb, "usb_bulk_msg" },
	{ 0x1f56a52b, "drm_gem_shmem_vunmap" },
	{ 0xd91d9be6, "dma_buf_end_cpu_access" },
	{ 0xb51050a5, "dma_buf_begin_cpu_access" },
	{ 0x12261457, "drm_gem_shmem_vmap" },
	{ 0x493fceaf, "drm_dev_fini" },
	{ 0xe44eee50, "drm_mode_config_cleanup" },
	{ 0x37a0cba, "kfree" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x1449451d, "drm_crtc_send_vblank_event" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x3db9e734, "drm_atomic_helper_damage_merged" },
	{ 0x8698582f, "drm_mode_object_get" },
	{ 0xca161191, "drm_dev_put" },
	{ 0xb70f1c44, "drm_dev_unplug" },
	{ 0xb5e5c757, "drm_mode_object_put" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "drm_kms_helper,drm");

MODULE_ALIAS("usb:v1DE1pC102d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "43A54364B5059ADD66213BB");
