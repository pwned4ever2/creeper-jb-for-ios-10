
//v0rtex .h
#import "common.h"
#include <mach/mach.h>
#include <stdint.h>

typedef struct
{
    const char *version;
    kptr_t base;
    // Structure offsets
    kptr_t sizeof_task;
    kptr_t task_itk_self;
    kptr_t task_itk_registered;
    kptr_t task_bsd_info;
    kptr_t proc_ucred;
    kptr_t vm_map_hdr;
    kptr_t ipc_space_is_task;
    kptr_t realhost_special;
    kptr_t iouserclient_ipc;
    kptr_t vtab_get_retain_count;
    kptr_t vtab_get_external_trap_for_index;
    // Data
    kptr_t zone_map;
    kptr_t kernel_map;
    kptr_t kernel_task;
    kptr_t realhost;
    // Code
    kptr_t copyin;
    kptr_t copyout;
    kptr_t chgproccnt;
    kptr_t kauth_cred_ref;
    kptr_t ipc_port_alloc_special;
    kptr_t ipc_kobject_set;
    kptr_t ipc_port_make_send;
    kptr_t osserializer_serialize;
    kptr_t rop_ldr_x0_x0_0x10;
    // Remount 
    kptr_t root_vnode;
    // AMFID stuff
    kptr_t vfs_context_current;
    kptr_t vnode_getfromfd;
    kptr_t vnode_getattr;
    kptr_t vnode_put;
    kptr_t csblob_ent_dict_set;
    kptr_t sha1_init;
    kptr_t sha1_update;
    kptr_t sha1_final;
} offsets_t;

typedef kern_return_t (*v0rtex_cb_t)(task_t tfp0, kptr_t kbase, void *cb_data);

kern_return_t v0rtex(offsets_t *off, v0rtex_cb_t callback, void *cb_data);